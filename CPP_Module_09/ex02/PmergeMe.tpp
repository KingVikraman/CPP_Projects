/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 12:42:28 by rvikrama          #+#    #+#             */
/*   Updated: 2026/06/10 16:44:01 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
void PmergeMe::mergeInsert(Container &c, size_t &comparisonCount)
{
	if (c.size() <= 1)
		return;

	bool hasLeftover = (c.size() % 2 != 0);
	int leftover = hasLeftover ? c.back() : 0;

	std::vector<std::pair<int,int> > pairs;
	for (size_t i = 0; i + 1 < c.size(); i += 2)
	{
		int a = c[i];
		int b = c[i + 1];
		comparisonCount++;
		if (a > b)
			std::swap(a, b);
		pairs.push_back(std::make_pair(a, b));
	}

	Container mainChain;
	Container pending;
	std::vector<size_t> bigPositions;

	for (size_t i = 0; i < pairs.size(); i++)
	{
		pending.push_back(pairs[i].first);
		mainChain.push_back(pairs[i].second);
		bigPositions.push_back(mainChain.size() - 1);
	}

	mergeInsert(mainChain, comparisonCount);

	// ── recalculate bigPositions after recursive sort ─────────────
	for (size_t i = 0; i < pairs.size(); i++)
	{
		for (size_t j = 0; j < mainChain.size(); j++)
		{
			if (mainChain[j] == pairs[i].second)
			{
				bigPositions[i] = j;
				break;
			}
		}
	}

	std::vector<size_t> order = buildInsertionOrder(pending.size());

	for (size_t i = 0; i < order.size(); i++)
	{
		size_t idx = order[i] - 1;
		if (idx >= pending.size())
			continue;

		size_t maxIdx = bigPositions[idx];

		// binary search restricted to 0..maxIdx
		size_t left = 0;
		size_t right = maxIdx + 1;
		while (left < right)
		{
			size_t mid = left + (right - left) / 2;
			comparisonCount++;
			if (pending[idx] < mainChain[mid])
				right = mid;
			else
				left = mid + 1;
		}
		size_t insertPos = left;
		mainChain.insert(mainChain.begin() + insertPos, pending[idx]);

		// ── update bigPositions after every insertion ─────────────
		for (size_t j = 0; j < bigPositions.size(); j++)
		{
			if (bigPositions[j] >= insertPos)
				bigPositions[j]++;
		}
	}

	if (hasLeftover)
		binarySearchInsert(mainChain, leftover, comparisonCount);

	c = mainChain;
}

template <typename Container>
void PmergeMe::binarySearchInsert(Container &sorted, int value, size_t &comparisonCount)
{
	size_t left = 0;
	size_t right = sorted.size();

	while (left < right)
	{
		size_t mid = left + (right - left) / 2;

		comparisonCount++;  // count the comparison

		if (value < sorted[mid])
			right = mid;
		else
			left = mid + 1;
	}

	sorted.insert(sorted.begin() + left, value);
}

template <typename Container>
void PmergeMe::binarySearchInsertRestricted(Container &sorted, int value, size_t &comparisonCount, size_t maxIndex)
{
    size_t left = 0;
    size_t right = maxIndex + 1; // search only up to the bigger element

    while (left < right)
    {
        size_t mid = left + (right - left) / 2;
        comparisonCount++;  // count this comparison
        if (value < sorted[mid])
            right = mid;
        else
            left = mid + 1;
    }

    sorted.insert(sorted.begin() + left, value);
}

template <typename Container>
double	PmergeMe::run_sort(Container &c)
{
	size_t comparisonCount = 0;
	_t start = clock();
	mergeInsert(c, comparisonCount);
	clock_t end = clock();
	double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;
	return (time);
}
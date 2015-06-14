#ifndef COLLECTIONOFUSEFULFUNCTIONS_H
#define COLLECTIONOFUSEFULFUNCTIONS_H
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <unordered_set>
#include <stack>
#include <cstdlib>

/*PRINT FUNCTIONS FOR ALL STL CONTAINERS TEMPLATED TO WORK WITH ANY TYPE*/
template <typename T, size_t N>
void printArray(std::array<T,N> myArray)
{
     for(const auto & element : myArray)
     {
	 	std::cout << element << "\n";
     }
}

template <typename T>
void printDeque(std::deque<T> d)
{
      for(const auto & element : d)
      {
	 	std::cout << element << "\n";
      }
}

template <typename T>
void printForwardList(std::forward_list<T> fowardList)
{
      for(const auto & element : fowardList)
      {
	  	std::cout << element << "\n";
      }
}

template <typename T>
void printList(std::list<T> List)
{
       for(const auto & element : List)
       {
	   	std::cout << element << "\n";
       }
}

//need two typenames here since a map take a key and a value
//So, one typename for the key and one for the value
template <typename Key, typename T>
void printMap(std::map<Key,T> Map)
{
	for(const auto & element : Map)
	{
		std::cout << "Key: " << element.first << " maps to value: " << element.second << "\n";
	}
}

template <typename Key, typename T, typename Compare, typename Alloc>
void printMultiMap(std::multimap<Key,T,Compare,Alloc> Multimap)
{
	for(const auto & element : Multimap)
	{
		std::cout << "Key: " << element.first << " maps to value: " << element.second << "\n";
	}
}

template <typename T>
void printQueue(std::queue<T> Q)
{
	while(!Q.empty())
	{
		std::cout << Q.front() << "\n";
		Q.pop();
	}
}

template <typename T>
void printPriorityQueue(std::priority_queue<T> priorityQueue)
{
	while(!priorityQueue.empty())
	{
		std::cout << priorityQueue.top() << "\n";
		priorityQueue.pop();
	}
}

template <typename T, typename Compare, typename Alloc>
void printSet(std::set<T,Compre,Alloc> mySet)
{
	for(const auto & element : mySet)
	{
		std::cout << element << "\n";
	}
}

template <typename T, typename Compare, typename Alloc>
void printMultiSet(std::multiset<T,Compare,Alloc> Multiset)
{
	for(const auto & element : Multiset)
	{
		std::cout << element << "\n";
	}
}

template <typename T>
void printStack(std::stack<T> myStack)
{
	while(!myStack.empty())
	{
		std::cout << myStack.top() << "\n";
		myStack.pop();
	}
}

template <typename Key, typename T,typename Hash,typename Pred,typename Alloc>
void printUnorderedMap(std::unordered_map<Key,T,Hash,Pred,Alloc> myUnorderedMap)
{
	for(const auto & element : myUnorderedMap)
	{
		std::cout << "Key: " << element.first << " maps to value: " << element.second << "\n";
	}
}

template <typename Key, typename T, typename Hash, typename Pred, typename Alloc>
void printUnorderedMultiMap(std::unordered_multimap<Key,T,Hash,Pred,Alloc> myUnorderedMultiMap)
{
	for(const auto & element : myUnorderedMultiMap)
	{
		std::cout << "Key: " << element.first << " maps to value: " << element.second << "\n";
	}

}

template <typename Key, typename Hash, typename Pred, typename Alloc>
void printUnorderedSet(std::unordered_set<Key,Hash,Pred,Alloc> unorderedSet)
{
	for(const auto & element : unorderedSet)
	{
		std::cout << element << "\n";
	}
}

template <typename Key, typename Hash, typename Pred, typename Alloc>
void printUnorderedMultiSet(std::unordered_multiset<Key,Hash,Pred,Alloc> UnorderedMultiSet)
{
	for(const auto & element : UnorderedMultiSet)
	{
		std::cout << element << "\n";
	}
}

template <typename T>
void printVector(std::vector<T> vec)
{
	for(const auto & element : vec)
	{
		std::cout << element << "\n";
	}
}

#endif
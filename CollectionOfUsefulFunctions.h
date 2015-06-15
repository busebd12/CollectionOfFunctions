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

////////////////////////////////////////////PRINT FUNCTIONS FOR ALL STL CONTAINERS TEMPLATED TO WORK WITH ANY TYPE//////////////////////////////////////
template <typename ArrayType>
void printArray(const ArrayType & Array)
{
	for(const auto & element : Array)
	{
		std::cout << element << "\n";
	}
}

/*
template <typename T, size_t N>
void printArray(std::array<T,N> myArray)
{
  	for(const auto & element : myArray)
  	{
 		std::cout << element << "\n";
  	}
}
*/

template <typename DequeType>
void printDeque(const DequeType & Deque)
{
	for(const auto & element : Deque)
	{
		std::cout << element << "\n";
	}
}

/*
template <typename T>
void printDeque(std::deque<T> d)
{
   for(const auto & element : d)
   {
 		std::cout << element << "\n";
   }
}
*/

template <typename ForwardListType>
void printForwardList(const ForwardListType & ForwardList)
{
	for(const auto & element : ForwardList)
	{
		std::cout << element << "\n";
	}
}

/*
template <typename T>
void printForwardList(std::forward_list<T> fowardList)
{
	for(const auto & element : fowardList)
   {
  		std::cout << element << "\n";
   }
}
*/

template <typename ListType>
void printList(const ListType & List)
{
 	for(const auto & element : List)
 	{
		std::cout << element << "\n";
 	}
}

/*
template <typename T>
void printList(std::list<T> List)
{
 	for(const auto & element : List)
 	{
		std::cout << element << "\n";
 	}
}
*/

template <typename MapType>
void printMap(const MapType & Map)
{
	for(const auto & element : Map)
	{
		std::cout << "Key: " << element.first << " maps to value: " << element.second << "\n";
	}
}

/*
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
*/

template <typename MultiMapType>
void printMultiMap(const MultiMapType & Multimap)
{
	for(const auto & element : Multimap)
	{
		auto value=Multimap.equal_range(element.first);
		for(auto itr=value.first;itr!=value.second;++itr)
		{
			std::cout << "Key: " << element.first << " maps to value: " << itr->second << "\n";
		}
		
	}
}

/*
template <typename Key, typename T, typename Compare, typename Alloc>
void printMultiMap(std::multimap<Key,T,Compare,Alloc> Multimap)
{
	for(const auto & element : Multimap)
	{
		std::cout << "Key: " << element.first << " maps to value: " << element.second << "\n";
	}
}
*/

template <typename QueueType>
void printQueue(const QueueType & Queue)
{
	while(!Queue.empty())
	{
		std::cout << Queue.front() << "\n";
		Queue.pop();
	}
}

/*
template <typename T>
void printQueue(std::queue<T> Q)
{
	while(!Q.empty())
	{
		std::cout << Q.front() << "\n";
		Q.pop();
	}
}
*/

template <typename PriorityQueueType>
void printPriorityQueue(const PriorityQueueType & PriorityQueue)
{
	while(!PriorityQueue.empty())
	{
		std::cout << PriorityQueue.top() << "\n";
		PriorityQueue.pop();
	}
}

/*
template <typename T>
void printPriorityQueue(std::priority_queue<T> priorityQueue)
{
	while(!priorityQueue.empty())
	{
		std::cout << priorityQueue.top() << "\n";
		priorityQueue.pop();
	}
}
*/

template <typename SetType>
void printSet(const SetType & Set)
{
	for(const auto & element : Set)
	{
		std::cout << element << "\n";
	}
}

/*
template <typename T, typename Compare, typename Alloc>
void printSet(std::set<T,Compare,Alloc> mySet)
{
	for(const auto & element : mySet)
	{
		std::cout << element << "\n";
	}
}
*/

template <typename MultisetType>
void printMultiSet(const MultisetType & Multiset)
{
	for(const auto & element : Multiset)
	{
		std::cout << element << "\n";
	}
}

/*
template <typename T, typename Compare, typename Alloc>
void printMultiSet(std::multiset<T,Compare,Alloc> Multiset)
{
	for(const auto & element : Multiset)
	{
		std::cout << element << "\n";
	}
}
*/

template <typename StackType>
void printStack(const StackType & Stack)
{
	while(!Stack.empty())
	{
		std::cout << Stack.top() << "\n";
		Stack.pop();
	}
}

/*
template <typename T>
void printStack(std::stack<T> myStack)
{
	while(!myStack.empty())
	{
		std::cout << myStack.top() << "\n";
		myStack.pop();
	}
}
*/

template <typename UnorderedMapType>
void printUnorderedMap(const UnorderedMapType & UnorderedMap)
{
	for(const auto & element : UnorderedMap)
	{
		std::cout << "Key: " << element.first << " maps to value: " << element.second << "\n";
	}
}

/*
template <typename Key, typename T,typename Hash,typename Pred,typename Alloc>
void printUnorderedMap(std::unordered_map<Key,T,Hash,Pred,Alloc> myUnorderedMap)
{
	for(const auto & element : myUnorderedMap)
	{
		std::cout << "Key: " << element.first << " maps to value: " << element.second << "\n";
	}
}
*/

template <typename UnorderedMultimapType>
void printUnorderedMultiMap(const UnorderedMultimapType & UnorderedMultimap)
{
	for(const auto & element : UnorderedMultimap)
	{
		auto value=UnorderedMultimap.equal_range(element.first);
		for(auto itr=value.first;itr!=value.second;++itr)
		{
			std::cout << "Key: " << element.first << " maps to value: " << itr->second << "\n";
		}
	}

}

/*
template <typename Key, typename Hash, typename Pred, typename Alloc>
void printUnorderedSet(std::unordered_set<Key,Hash,Pred,Alloc> unorderedSet)
{
	for(const auto & element : unorderedSet)
	{
		std::cout << element << "\n";
	}
}
*/

template <typename UnorderedMultisetType>
void printUnorderedMultiSet(const UnorderedMultisetType & UnorderedMultiset)
{
	for(const auto & element : UnorderedMultiset)
	{
		std::cout << element << "\n";
	}
}

template <typename VectorType>
void printVector(const VectorType & Vector)
{
	for(const auto & element : Vector)
	{
		std::cout << element << "\n";
	}
}

/*
template <typename T>
void printVector(std::vector<T> vec)
{
	for(const auto & element : vec)
	{
		std::cout << element << "\n";
	}
}
*/


////////////////////////////////////////////////////SIMPLE SEARCH FUNCTIONS FOR STL CONTAINERS////////////////////////////////////////////////////////
template <typename ArrayType, typename ValueType>
void searchInArrayFor(const ArrayType & Array, ValueType searchValue)
{
	if(Array.empty())
	{
		std::cout << "Array is empty, nothing to search for..." << "\n";
	}
	else
	{
		for(const auto & element : Array)
		{
			if(element==searchValue)
			{
				std::cout << searchValue << " matches " << element << ", an element in the array" << "\n";
			}
		}
	}	
}

/*
template <typename T, size_t N>
void searchInArrayFor(std::array<T,N> Array, T searchValue)
{
	if(Array.empty())
	{
		std::cout << "Array is empty, nothing to search for..." << "\n";
	}
	else
	{
		for(const auto & element : Array)
		{
			if(element==searchValue)
			{
				std::cout << searchValue << " matches " << element << ", an element in the array" << "\n";
			}
		}
	}	
}
*/

template <typename DequeType, typename ValueType>
void searchInDequeFor(const DequeType & Deque, ValueType searchValue)
{
	if(Deque.empty())
	{
		std::cout << "Deque is empty, nothing to search for..." << "\n";
	}
	else
	{
		for(const auto & element : Deque)
		{
			if(element==searchValue)
			{
				std::cout << searchValue << " matches " << element << ", an element in the deque" << "\n";
			}
		}
	}	
}

/*
template <typename T>
void searchInDequeFor(std::deque<T> Deque, T searchValue)
{
	if(Deque.empty())
	{
		std::cout << "Deque is empty, nothing to search for..." << "\n";
	}
	else
	{
		for(const auto & element : Deque)
		{
			if(element==searchValue)
			{
				std::cout << searchValue << " matches " << element << ", an element in the deque" << "\n";
			}
		}
	}	
}
*/

template <typename ForwardListType, typename ValueType>
void searchInForwardListFor(const ForwardListType & ForwardList, ValueType searchValue)
{
	if(ForwardList.empty())
	{
		std::cout << "Forward list is empty, nothing to search for..." << "\n";
	}
	else
	{
		for(const auto & element : ForwardList)
		{
			if(element==searchValue)
			{
				std::cout << searchValue << " matches " << element << ", an element in the forward list" << "\n";
			}
		}
	}	
}

/*
template <typename T>
void searchInForwardListFor(std::forward_list<T> ForwardList, T searchValue)
{
	if(ForwardList.empty())
	{
		std::cout << "Forward list is empty, nothing to search for..." << "\n";
	}
	else
	{
		for(const auto & element : ForwardList)
		{
			if(element==searchValue)
			{
				std::cout << searchValue << " matches " << element << ", an element in the forward list" << "\n";
			}
		}
	}	
}
*/

template <typename ListType, typename ValueType>
void searchInListFor(const ListType & List, ValueType searchValue)
{
	if(List.empty())
	{
		std::cout << "List is empty, nothing to search for..." << "\n";
	}
	else
	{
		for(const auto & element : List)
		{
			if(element==searchValue)
			{
				std::cout << searchValue << " matches " << element << ", an element in the list" << "\n";
			}
		}
	}	
}

/*
template <typename T>
void searchInListFor(std::list<T> List, T searchValue)
{
	if(List.empty())
	{
		std::cout << "List is empty, nothing to search for..." << "\n";
	}
	else
	{
		for(const auto & element : List)
		{
			if(element==searchValue)
			{
				std::cout << searchValue << " matches " << element << ", an element in the list" << "\n";
			}
		}
	}	
}
*/

template <typename StackType, typename ValueType>
void searchInStackFor(const StackType & Stack, ValueType searchValue)
{
	while(!Stack.empty())
	{
		if(Stack.top()==searchValue)
		{
			std::cout << Stack.top() << ", the top of the stack, matches " << searchValue << ", the value you were searching for in the stack" << "\n";
		}
	}
}

template <typename QueueType, typename ValueType>
void searchInQueueFor(const QueueType & Queue, ValueType searchValue)
{
	while(!Queue.empty())
	{
		if(Queue.top==searchValue)
		{
			std::cout << Queue.top << ", a value in the queue matches " << searchValue << " the value you were searching for" << "\n";
		}
		Queue.pop();
	}
}

template <typename PriorityQueueType, typename ValueType>
void searchInPriorityQueueFor(const PriorityQueueType & PriorityQueue, ValueType searchValue)
{
	while(!PriorityQueue.empty())
	{
		if(PriorityQueue.top==searchValue)
		{
			std::cout << PriorityQueue.top << ", a value in the priority queue matches " << searchValue << " the value you were searching for" << "\n";
		}
		PriorityQueue.pop();
	}
}


template <typename MapType, typename ValueType>
void searchInMapByValue(const MapType & Map, ValueType searchValue)
{
	if(Map.empty())
	{
		std::cout << "Map is empty, nothing to search for..." << "\n";
	}
	for(const auto & element : Map)
	{
		if(element.second==searchValue)
		{
			std::cout << searchValue << " matches " << element.second << ", a value associated with a key" << " in the map" << "\n";
		}
	}
}

/*
template <typename Key, typename T>
void searchInMapByKey(std::map<Key,T> Map, T keyValue)
{
	if(Map.empty())
	{
		std::cout << "Map is empty, nothing to search for..." << "\n";
	}
	else
	{
		for(const auto & element : Map)
		{
			if(element.first==keyValue)
			{
				std::cout << keyValue << "matches a key value " << " in the map" << "\n";
			}
		}
	}
}
*/

template <typename MultimapType, typename ValueType>
void searchInMultiMapByValue(const MultimapType & Multimap, ValueType searchValue)
{
	for(const auto & element : Multimap)
	{
		auto value=equal_range(element.first);
		for(auto itr=value.first;itr!=value.second;++itr)
		{
			if(itr->second==searchValue)
			{
				std::cout << itr->second << " has the same value as " << searchValue << ", a value in the multimap" << "\n";
			}
		}
	}
}

template <typename UnorderedMapType, typename ValueType>
void searchInUnorderedMapByValue(const UnorderedMapType & UnorderedMap, ValueType searchValue)
{
	if(UnorderedMap.empty())
	{
		std::cout << "Map is empty, nothing to search for..." << "\n";
	}
	for(const auto & element : UnorderedMap)
	{
		if(element.second==searchValue)
		{
			std::cout << searchValue << " matches " << element.second << ", a value associated with a key" << " in the unordered map" << "\n";
		}
	}
}

template <typename UnorderedMultiMapType, typename ValueType>
void searchInUnorderedMultiMapByValue(const UnorderedMultiMapType & UnorderedMultiMap, ValueType searchValue)
{
	for(const auto & element : UnorderedMultiMap)
	{
		auto value=equal_range(element.first);
		for(auto itr=value.first;itr!=value.second;++itr)
		{
			if(itr->second==searchValue)
			{
				std::cout << itr->second << " has the same value as " << searchValue << ", a value in the unordered multimap" << "\n";
			}
		}
	}
}

/////////////////////////////////STL CONTAINER FUNCTIONS TO GET THE NUMBER OF ELEMENTS MATCHING A CERTAIN REQUIREMENT/////////////////////////////////
template <typename ArrayType, typename ElementType>
void elementCount(const ArrayType & Array, ElementType Element)
{
	int count=0;
	for(const auto & element : Array)
	{
		if(element==Element)
		{
			count++;
		}
	}
	std::cout << "The number of " << Element << "'s in the array is " << count << "\n";
}


#endif
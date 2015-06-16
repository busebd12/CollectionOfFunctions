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

template <typename DequeType>
void printDeque(const DequeType & Deque)
{
	for(const auto & element : Deque)
	{
		std::cout << element << "\n";
	}
}

template <typename ForwardListType>
void printForwardList(const ForwardListType & ForwardList)
{
	for(const auto & element : ForwardList)
	{
		std::cout << element << "\n";
	}
}

template <typename ListType>
void printList(const ListType & List)
{
 	for(const auto & element : List)
 	{
		std::cout << element << "\n";
 	}
}

template <typename MapType>
void printMap(const MapType & Map)
{
	for(const auto & element : Map)
	{
		std::cout << "Key: " << element.first << " maps to value: " << element.second << "\n";
	}
}

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

template <typename QueueType>
void printQueue(QueueType & Queue)
{
	while(!Queue.empty())
	{
		std::cout << Queue.front() << "\n";
		Queue.pop();
	}
}


template <typename PriorityQueueType>
void printPriorityQueue(PriorityQueueType & PriorityQueue)
{
	while(!PriorityQueue.empty())
	{
		std::cout << PriorityQueue.top() << "\n";
		PriorityQueue.pop();
	}
}

template <typename SetType>
void printSet(const SetType & Set)
{
	for(const auto & element : Set)
	{
		std::cout << element << "\n";
	}
}

template <typename MultisetType>
void printMultiSet(const MultisetType & Multiset)
{
	for(const auto & element : Multiset)
	{
		std::cout << element << "\n";
	}
}

template <typename StackType>
void printStack(StackType & Stack)
{
	while(!Stack.empty())
	{
		std::cout << Stack.top() << "\n";
		Stack.pop();
	}
}

template <typename UnorderedMapType>
void printUnorderedMap(const UnorderedMapType & UnorderedMap)
{
	for(const auto & element : UnorderedMap)
	{
		std::cout << "Key: " << element.first << " maps to value: " << element.second << "\n";
	}
}

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

template <typename UnorderedSetType>
void printUnorderedSet(const UnorderedSetType & UnorderedSet)
{
	for(const auto & element : UnorderedSet)
	{
		std::cout << element << "\n";
	}
}


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

template <typename StackType, typename ValueType>
void searchInStackFor(StackType & Stack, ValueType searchValue)
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
void searchInQueueFor(QueueType & Queue, ValueType searchValue)
{
	while(!Queue.empty())
	{
		if(Queue.front()==searchValue)
		{
			std::cout << Queue.front() << ", a value in the queue matches " << searchValue << " the value you were searching for" << "\n";
		}
		Queue.pop();
	}
}

template <typename PriorityQueueType, typename ValueType>
void searchInPriorityQueueFor(PriorityQueueType & PriorityQueue, ValueType searchValue)
{
	while(!PriorityQueue.empty())
	{
		if(PriorityQueue.top()==searchValue)
		{
			std::cout << PriorityQueue.top() << ", a value in the priority queue matches " << searchValue << " the value you were searching for" << "\n";
		}
		PriorityQueue.pop();
	}
}

/////////////////////////////////STL CONTAINER FUNCTIONS TO GET THE NUMBER OF ELEMENTS MATCHING A CERTAIN REQUIREMENT/////////////////////////////////
template <typename ArrayType, typename ElementType>
void arrayElementCount(const ArrayType & Array, ElementType Element)
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

template <typename DequeType, typename ElementType>
void dequeElementCount(const DequeType & Deque, ElementType Element)
{
	int count=0;
	for(const auto & element : Deque)
	{
		if(element==Element)
		{
			count++;
		}
		
	}
	std::cout << "The number of " << Element << "'s in the deque is " << count << "\n";
} 

template <typename ForwardListType, typename ElementType>
void forwardListElementCount(const ForwardListType & ForwardList, ElementType Element)
{
	int count=0;
	for(const auto & element : ForwardList)
	{
		if(element==Element)
		{
			count++;
		}
	}
	std::cout << "The number of " << Element << "'s in the forward list is " << count << "\n";
}

template <typename ListType, typename ElementType>
void listElementCount(const ListType & List, ElementType Element)
{
	int count=0;
	for(const auto & element : List)
	{
		if(element==Element)
		{
			count++;
		}
	}
	std::cout << "The number of " << Element << "'s in the list is " << count << "\n";
}

#endif
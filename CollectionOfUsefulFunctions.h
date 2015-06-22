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
#include <algorithm>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////PRINT FUNCTIONS FOR ALL STL CONTAINERS TEMPLATED TO WORK WITH ANY TYPE//////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////SIMPLE SEARCH FUNCTIONS FOR STL CONTAINERS/////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename ArrayType, typename ValueType>
bool searchInArrayFor(const ArrayType & Array, ValueType searchValue)
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
				return true;
			}
		}
	}	
}

template <typename DequeType, typename ValueType>
bool searchInDequeFor(const DequeType & Deque, ValueType searchValue)
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
				return true;
			}
		}
	}	
}

template <typename ForwardListType, typename ValueType>
bool searchInForwardListFor(const ForwardListType & ForwardList, ValueType searchValue)
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
				return true;
			}
		}
	}	
}

template <typename ListType, typename ValueType>
bool searchInListFor(const ListType & List, ValueType searchValue)
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
				return true;
			}
		}
	}	
}

template <typename StackType, typename ValueType>
bool searchInStackFor(StackType & Stack, ValueType searchValue)
{
	while(!Stack.empty())
	{
		if(Stack.top()==searchValue)
		{
			std::cout << Stack.top() << ", the top of the stack, matches " << searchValue << ", the value you were searching for in the stack" << "\n";
			return true;
		}
	}
}

template <typename QueueType, typename ValueType>
bool searchInQueueFor(QueueType & Queue, ValueType searchValue)
{
	while(!Queue.empty())
	{
		if(Queue.front()==searchValue)
		{
			std::cout << Queue.front() << ", a value in the queue matches " << searchValue << " the value you were searching for" << "\n";
			return true;
		}
		Queue.pop();
	}
}

template <typename PriorityQueueType, typename ValueType>
bool searchInPriorityQueueFor(PriorityQueueType & PriorityQueue, ValueType searchValue)
{
	while(!PriorityQueue.empty())
	{
		if(PriorityQueue.top()==searchValue)
		{
			std::cout << PriorityQueue.top() << ", a value in the priority queue matches " << searchValue << " the value you were searching for" << "\n";
			return true;
		}
		PriorityQueue.pop();
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////STL CONTAINER FUNCTIONS TO GET THE NUMBER OF A CERTAIN ELEMENT/////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

template <typename MapType, typename ValueType>
void mapElementCount(const MapType & Map, ValueType Value)
{
	int count=0;
	for(const auto & element : Map)
	{
		if(element.second==Value)
		{
			count++;
		}
	}
	std::cout << "The number of " << Value << "'s in the map is " << count << "\n";
}

template <typename MultiMapType, typename ValueType>
void multiMapElementCount(const MultiMapType & MultiMap, ValueType Value)
{
	int count=0;
	for(const auto & element : MultiMap)
	{
		auto rangeValue=MultiMap.equal_range(element.first);
		for(auto itr=rangeValue.first;itr!=rangeValue.second;++itr)
		{
			if(itr->second==Value)
			{
				count++;
			}
		}
	}
	std::cout << "The number of " << Value << "'s in the multimap is " << count << "\n";
}

template <typename QueueType, typename ElementType>
void queueElementCount(QueueType & Queue, ElementType Element)
{
	int count=0;
	while(!Queue.empty())
	{
		if(Queue.front()==Element)
		{
			count++;
		}
		Queue.pop();
	}
	std::cout << "The number of " << Element << "'s in the queue is " << count << "\n";
}

template <typename PriorityQueueType, typename ElementType>
void priorityQueueElementCount(PriorityQueueType & PriorityQueue, ElementType Element)
{
	int count=0;
	while(!PriorityQueue.empty())
	{
		if(PriorityQueue.top()==Element)
		{
			count++;
		}
		PriorityQueue.pop();
	}
	std::cout << "The number of " << Element << "'s in the priority queue is " << count << "\n";
}

template <typename SetType, typename ElementType>
void setElementCount(const SetType & Set, ElementType Element)
{
	int count=0;
	for(const auto & element : Set)
	{
		if(element==Element)
		{
			count++;
		}
	}
	std::cout << "The number of " << Element << "'s in the set is " << count << "\n";
}

template <typename MultiSetType, typename ElementType>
void multiSetElementCount(const MultiSetType & MultiSet, ElementType Element)
{
	int count=0;
	for(const auto & element : MultiSet)
	{
		if(element==Element)
		{
			count++;
		}
	}
	std::cout << "The number of " << Element << "'s in the multiset is " << count << "\n";
}

template <typename StackType, typename ElementType>
void stackElementCount(StackType & Stack, ElementType Element)
{
	int count=0;
	while(!Stack.empty())
	{
		if(Stack.top()==Element)
		{
			count++;
		}
		Stack.pop();
	}
	std::cout << "The number of " << Element << "'s in the stack is " << count << "\n";
}

template <typename UnorderedMapType, typename ValueType>
void unorderedMapElementCount(const UnorderedMapType & UnorderedMap, ValueType Value)
{
	int count=0;
	for(const auto & element : UnorderedMap)
	{
		auto rangeValue=UnorderedMap.equal_range(element.first);
		for(auto itr=rangeValue.first;itr!=rangeValue.second;++itr)
		{
			if(itr->second==Value)
			{
				count++;
			}
		}
	}
	std::cout << "The number of " << Value << "'s in the unordered map is " << count << "\n";
}

template <typename UnorderedMultiMapType, typename ValueType>
void unorderedMultiMapElementCount(const UnorderedMultiMapType & UnorderedMultiMap, ValueType Value)
{
	int count=0;
	for(const auto & element : UnorderedMultiMap)
	{
		auto rangeValue=UnorderedMultiMap.equal_range(element.first);
		for(auto itr=rangeValue.first;itr!=rangeValue.second;++itr)
		{
			if(itr->second==Value)
			{
				count++;
			}
		}
	}
	std::cout << "The number of " << Value << "'s in the unordered multimap is " << count << "\n";
}

template <typename UnorderedSetType, typename ElementType>
void unorderedSetElementCount(const UnorderedSetType & UnorderedSet, ElementType Element)
{
	int count=0;
	for(const auto & element : UnorderedSet)
	{
		if(element==Element)
		{
			count++;
		}
	}
	std::cout << "The number of " << Element << "'s in the unordered set is " << count << "\n";
}

template <typename UnorderedMultiSetType, typename ElementType>
void unorderedMultiSetElementCount(const UnorderedMultiSetType & UnorderedMultiSet, ElementType Element)
{
	int count=0;
	for(const auto & element : UnorderedMultiSet)
	{
		if(element==Element)
		{
			count++;
		}
	}
	std::cout << "The number of " << Element << "'s in the unordered multiset is " << count << "\n";
}

template <typename VectorType, typename ElementType>
void vectorElementCount(const VectorType & Vector, ElementType Element)
{
	int count=0;
	for(const auto & element : Vector)
	{
		if(element==Element)
		{
			count++;
		}
	}
	std::cout << "The number of " << Element << "'s in the vector is " << count << "\n";
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////SORT FUNCTION FOR NON MAP STL CONTAINERS//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename ContainerType>
void Sort(ContainerType & Container)
{
	std::sort(Container.begin(),Container.end());
}

#endif

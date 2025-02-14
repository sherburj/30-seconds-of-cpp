# insert

**Difficulty** : Beginner

**Time Considerations** : 15 minutes

**Description** : Inserts new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.

**Syntax :** vectorname.insert()

**Example**:
```cpp
    // initialising the vector 
	std::vector<int> vec = { 10, 20, 30, 40 }; 

	// inserts 5 at front 
	auto it = vec.insert(vec.begin(), 5);  

	std::cout << "The vector elements are: "; 
	for (auto it = vec.begin(); it != vec.end(); ++it) 
		std::cout << *it << " "; 
	std::cout << std::endl;
```
**[See Sample code](../snippets/vector/insert.cpp)**
**[Run Code](https://rextester.com/AHENR90238)**

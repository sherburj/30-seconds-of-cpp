# capacity

**Difficulty** : Beginner

**Time Considerations** : 15 minutes

**Description** : Returns the storage space currently allocated to vector. 

Vectors are dynamically allocated space, their maximum capacity changes to accommodate expansion without the need to relocate vector each time. This does not list the number of elements.

**Syntax :** vectorname.capacity()

**Example**
```cpp
   //Declare the vector
   std::vector<int> myvector{1,2,3,4,5};

   //when capacity is exhausted, vector automatically expands
   std::cout<<"The maximum capacity of the vector is: "<< myvector.capacity();

```
**[See Sample code](../snippets/vector/capacity.cpp)**
**[Run Code](https://rextester.com/ZVN24902)**

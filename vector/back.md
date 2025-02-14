# back

**Difficulty** : beginner

**Time Considerations** : 15 minutes

**Description** : Returns a reference to the last element in the vector.

**Syntax :** vectorname.back()

**Example** :

```cpp
    // Initialize int vector
    std::vector<int> myVector = {1, 2, 3, 4, 5}; 
    
    // Save reference to the last element
    int& lastEle = myVector.back();
  
    // Last element is 5
    std::cout << myVector.back() << " ";
    
    // Change the last element by changing the reference variable lastEle
    lastEle = 10;
  
    // Last element is 10
    std::cout << myVector.back() << " ";
    
```
**[See Sample code](../snippets/vector/back.cpp)**
**[Run Code](https://rextester.com/RQEY20725)**

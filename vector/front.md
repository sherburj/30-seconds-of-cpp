# front

**Difficulty** : Beginner

**Time Considerations** : 15 minutes

**Description** : Used to return a reference to the first element in a vector container.

**Syntax :** vectorname.front()

**Example**:
```cpp
    // Creating a vector 
    std::vector<int> example; 
  
    // Add elements to the List 
    example.push_back(10); 
    example.push_back(20); 
    example.push_back(30); 
    example.push_back(40); 
  
    // get the first element using front() 
    int & ele = example.front(); 
  
    // Print the first element 
    std::cout << ele; 
 
```
**[See Sample code](../snippets/vector/front.cpp)**
**[Run Code](https://rextester.com/WASUB54049)**

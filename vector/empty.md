# empty

**Difficulty** : Beginner

**Time Considerations** : 10 minutes

**Description** : Used to check whether a particular vector container is empty or not. Returns True or Flase

**Syntax :** vectorname.empty()

**Example** :
```cpp
    // Creating a vector 
    std::vector<int> example; 
  
    // check if vector is empty 
    if (example.empty()) 
        std::cout << "Empty Vector\n"; 
    else
        std::cout << "Not Empty\n"; 
  
    // Add elements to the Vector 
    example.push_back(10); 
    example.push_back(20); 
    example.push_back(30); 
    example.push_back(40); 
  
    // check again if vector is empty 
    if (example.empty()) 
        std::cout << "Empty Vector\n"; 
    else
        std::cout << "Not Empty\n"; 
         
```
**[See Sample Code](../snippets/vector/empty.cpp)**
**[Run Code](https://rextester.com/ZMFKZ74225)**

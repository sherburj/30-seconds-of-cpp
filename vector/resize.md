# resize

**Difficulty** : Beginner

**Time Considerations** : 15 minutes

**Description :** : Resizes vector to contain n elements. Can be used to add and remove elements.

Two variations:

1. If the vector is resized without a second argument, then newly created elements will default to a value of 0.
2. If the vector is resized with a second argument, then the newly created elements will contain that argument. 

**Example** :

```cpp
    // Initialize empty vector
    vector<int> myVector; 
    
    // Resize the vector to contain 5 elements with default value, 0
    myVector.resize(5);
    
    // Resize the vector to contain 10 elements, sets additional elements value to 1
    myVector.resize(10,1);

    // Outputs the resized vector with size of 10 elements
    for (int it : myVector){
        std::cout << it << " ";
    }
    
    // Resize the vector to contain 5 elements
    myVector.resize(5);
    
    std::cout << std::endl;
    // Outputs the resized vector with size of 5 elements
    for (int it : myVector){
        std::cout << it << " ";
    }
```
**[Run Code](https://rextester.com/PTX81543)**

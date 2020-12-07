# cbegin

**Difficulty** : Beginner

**Time Considerations** : 15 minutes

**Description** : The function returns an iterator which is used to iterate container.

Notes:

- The iterator points to the beginning of the vector.
- Iterator cannot modify the contents of the vector.

**Syntax :** vectorname.cbegin()

**Example**:
```cpp
// Demonstrates cbegin() 
#include <iostream>
#include <vector>

int main(){
    //declares an empty vector
    std::vector<int> vec;
    
    //inserting elements in vector
    vec.push_back(101);
    vec.push_back(12);
    vec.push_back(999);
  
    //Displaying elements of  vector
    std::cout << "Content of the vector \n";
    for (auto it = vec.cbegin(); it != vec.end(); ++it){ 
        std::cout << *it << '\n'; 
    }
    return 0;
}

```
**[See Sample code](../snippets/vector/cbegin.cpp)**
**[Run Code](https://rextester.com/XRFTW94461)**


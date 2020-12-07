# cend

**Difficulty** : Beginner

**Time Considerations** : 15 minutes

**Description** : The function returns an iterator which is used to iterate container.

Notes:

- The iterator points to past-the-end element of the vector.
- Iterator cannot modify the contents of the vector.

**Syntax :** vectorname.cend()

**Example**:
```cpp
// Demonstrates cend() 
#include <iostream>
#include <vector>

int main(){
    //declares an empty vector
    std::vector<int> vec;
    
    //inserting elements in vector
    vec.push_back(101);
    vec.push_back(12);
    vec.push_back(999);
    vec.push_back(143);
  
    //Displaying elements of  vector from the end
    std::cout << "Content of the vector \n";
    for (auto it = vec.cend() - 1;  it >= vec.begin(); --it){ 
        std::cout << *it << '\n'; 
    }
    return 0;
}

```
**[See Sample code](../snippets/vector/cend.cpp)**
**[Run Code](https://rextester.com/QQMCH84623)**


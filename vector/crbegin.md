# crbegin

**Difficulty** : Advanced

**Time Considerations** : 20 minutes

**Description** : The function returns an const_reverse_iterator pointing to the last element in the container (i.e., its reverse beginning). The iterator points to past-the-end element of the vector.

**Syntax :** vectorname.crbegin()

**Example**:
```cpp
// Demonstrates cbegin() 
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector = {1,2,3,4,5};

  std::cout << "myvector backwards:";
  for (auto rit = myvector.crbegin(); rit != myvector.crend(); ++rit)
    std::cout << ' ' << *rit;
  std::cout << '\n';

  return 0;
}
```
**[See Sample code](../snippets/vector/crbegin.cpp)**
**[Run Code](https://rextester.com/HOY41620)**


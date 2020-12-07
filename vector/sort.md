# sort

**Difficulty** : Intermediate

**Time Considerations** : 25 minutes

**Description** : Puts the vector in increasing or decreasing order

Variations

1. With two arguments, function will put emements in increasing order
2. With three arguments, function will put elements in order based on the third argument. 

**Syntax :** vectorname.sort()

**Example**:
```cpp
    //Declare the vector  
    std::vector<int> v {-1,0,4,-5,12,2,10,-11,3,5};

    //Function to sort values in increasing order in the vector

    std::sort(v.begin(), v.end());
    
    //Function to sort values in decreasing order in the vector

    std::sort(v.begin(), v.end(), std::greater<int>()); 

```
**[See Sample code](../snippets/vector/sort.cpp)**
**[Run Code](https://rextester.com/FFTEBY25900)**
#include <iostream> 
#include <unordered_map>
#include <vector>

using namespace std;
int main()
{
    vector<int> num = {3,2,4};
    unordered_map<int, int> k;
    int target = 6;
    int compliment = 0;    
    for(int i = 0; i < num.size(); i++)
    {
        compliment = target - num[i];
        if(k.find(compliment) != k.end())
        {
            cout << "The indices are [ " << k[compliment] << " , " << i << "]";
            return 0;
        }
        k[num[i]] = i;
    }
}

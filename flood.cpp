#include <iostream> 
using namespace std; 
class Grid {
#define M
    public: 
        int mygoals[4][4];
        
        struct Points{
            Points* next; 
            pair<int, int> data; 
            int side;
            Points(): next(nullptr), data(0) {}
            Points(int x): data(x), next(nullptr) {}
            Points(int x, Points *next1): data(x) , next(next1) {}

        }
    public: 
        void properties( vector<>){
            
        }
        vector<vector<int>> finding
}
#include <iostream> 
#include <vector>
using namespace std;
 
class Grid {
#define M
    public: 
        //plan
        int *mygoals[4][4];
        
        vector<int> boxside = static_cast<vector<int>**>(malloc(*mygoals)));
        //do djkin... in which we go to each block in a straight line 
        // towards middle of that block but if any walls in the 
        //way we could have current inertia of the bot and its position
        //x on its current block and y on its current block aswell
        // make it so that it is on the next recurring block that 
        //closer to the target 
        //pppoooppooo ppeeeepeepee
        //2nd method 
        //we could go from target and find a block near it which it 
        // can show a open space to the target point(like a ray) 
               
        float bias; 
        
        struct Node {
            bool visited ();


            
        };
        
        //DJikstra's algorithm 
        // template bias{
            
        // }
        struct Points{
            Points* next; 
            pair<vector<int>, bool> data; 
            int side;
            
            //()
            Points(): next(nullptr), data{[0, 0, 0, 0], false} {}
            Points(int x): data{[]}, next(nullptr) {}
            Points(int x, Points *next1): data(x) , next(next1) {}

        }
    public: 
        void properties( vector<>){
            
        }
        vector<vector<int>> finding
}
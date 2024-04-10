class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
      int n=deck.size();
        queue<int> queue;
        for(int i=0;i<n;i++){
          queue.push(i);
            
        }
        sort(deck.begin(),deck.end());
        vector<int> result(n,0);
        for(int i=0;i<n;i++){
result[queue.front()]=deck[i];
        queue.pop();
        
        if(!queue.empty()){
queue.push(queue.front());
        queue.pop();
        }
    }
        return result;
    }
};

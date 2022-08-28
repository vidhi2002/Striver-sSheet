struct Node{
    Node* links[2];
    //Functions
    bool ispresent(int bit) {
        return (links[bit]!=NULL);
    }
    void put(int bit,Node* node) {
        links[bit] = node;
    }
    Node* get(int bit) {
        return links[bit];
    }
};
class Trie {
    private: Node* root;
    public:
    Trie() {
        root = new Node();
    }
    void insert(int num) {
        Node* node = root;
        for(int i=31;i>=0;i--) {
            int bit = ((num>>i) & 1);
            if(!node->ispresent(bit)) {
                node->put(bit,new Node());
            }
            node = node->get(bit);
        }
    }
    int getMax(int num) {
        Node*  node = root;
        int maxnum = 0;
        for(int i=31;i>=0;i--) {
            int bit = (num>>i) & 1;
            if(node->ispresent(1-bit)) {
                maxnum = maxnum | (1<<i);//in the final ans changing the bits if opp bit present in trie
                node=node->get(1-bit);
            }
            else{
                node =  node->get(bit);
            }
        }
        return maxnum;
    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
    Trie trie;
    for(auto it: nums) {
        trie.insert(it);
    }
    int maxi = 0;
    for(auto it: nums) {
        maxi = max(maxi,trie.getMax(it));
    }
    return maxi;
    }
};

#ifndef Node_hpp
#define Node_hpp

class Node 
{
private:
    int payload;
    Node* nextNode;
    
public:
    Node(int payload);
    int getPayload();
    Node* getNextNode();
    void setNextNode(Node* n);
    
};
#endif /* Node_hpp */
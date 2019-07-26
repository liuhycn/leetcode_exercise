/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node() {}

    Node(int _val, Node* _next, Node* _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        if(head == NULL) return head;
        map<Node*,int>dic1;
        vector<Node*>dic2;
        int cnt = 0;
        Node* phead = new Node();
        Node* ptail = phead;
        Node* pthis = head;
        while(pthis != NULL)
        {
            Node* ptemp = new Node(pthis->val,NULL,NULL);
            //cout<<ptemp<<endl;
            dic2.push_back(ptemp);
            //cout<<"222"<<endl;
            dic1[pthis] = cnt;
            //cout<<"333"<<endl;
            ptail->next = ptemp;
            //cout<<"444"<<endl;
            ptail = ptail->next;
            //cout<<"555"<<endl;
            pthis = pthis->next;
            //cout<<"666"<<endl;
            cnt++;
            //cout<<"777"<<endl;
        }
        //cout<<"1111"<<endl;
        pthis = head;
        Node* ptemp = phead->next;
        while(pthis != NULL)
        {
            if(pthis->random != NULL)
            {
                int thisno = dic1[pthis->random];
                cout<<thisno<<endl;
                ptemp->random = dic2[thisno];
            }
            pthis = pthis->next;
            ptemp = ptemp->next;
        }
        return phead->next;
    }
};

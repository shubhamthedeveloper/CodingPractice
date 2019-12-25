//https://practice.geeksforgeeks.org/problems/implement-queue-using-linked-list/1
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};

void MyQueue:: push(int x)
{
    QueueNode *temp = new QueueNode(x);
    
    if(rear == NULL){
        rear = temp;
        front = rear;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
}


int MyQueue :: pop()
{
    if(front == NULL)
    return -1;
    
    int temp = front->data;
    //delete(temp);
    
    front = front->next;
    if(front == NULL)
    rear = NULL;
    return temp;       
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";
        }
        }
        cout<<endl;
    }
}



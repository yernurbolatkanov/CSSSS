#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	
	Node(int node_data) {
            this->data = node_data;
            this->next = NULL;
    }
};

class LinkedList {
    public:
        Node *head;
        Node *tail;

        LinkedList() {
            this->head = NULL;
            this->tail = NULL;
        }

        void insert(int data) {
            Node* node = new Node(data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
        
        void print(Node* head){
        	while (head!=NULL) {
		        cout<<head->data<<endl;
		        head=head->next;
		    }
		}
		
		void doubleDelete(Node* head){
			return head->next->next;
		}
};

int main(){
	LinkedList* list = new LinkedList();
	int n, a;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>a;
		insert(a);
	}
	Node* list2 = doubleDelete(list->head);
	print(list2);
}

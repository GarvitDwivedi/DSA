#include<iostream>
using namespace std ;
template <typename T>

class QueueUsingArray {
	T *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;

	public :
	QueueUsingArray(int s) {
		data = new T[s];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capacity = s;
	}

	int getSize() {
		return size;
	}

	bool isEmpty() {
		return size == 0;
	}

	// insert element
	void enqueue(T element) {
		if(size == capacity) {
			T *newdata = new T[2*capacity];
			int j = 0 ;
			for(int i = firstIndex ; i < capacity ; i++){
				newdata[j] = data[i] ;
				j++ ;
			}
			for(int i = 0 ; i < firstIndex ; i++){
				newdata[j] = data[i] ;
				j++;
			}
			delete [] data ;
			data = newdata ;
			capacity = 2*capacity ;
			firstIndex = 0 ;
		//	cout << "Queue Full ! " << endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex = (nextIndex + 1) % capacity ;
		if(firstIndex == -1) {
			firstIndex = 0;
		}
		size++;
	}
	
	T front() {
		if(isEmpty()) {
			cout << "Queue is empty ! " << endl;
			return 0;
		}
		return data[firstIndex];
	}

	T dequeue() {
		if(isEmpty()) {
			cout << "Queue is empty ! " << endl;
			return 0;
		}
		T ans = data[firstIndex];
		firstIndex = (firstIndex + 1) % capacity;
		size--;
		if(size == 0) {
			firstIndex = -1;
			nextIndex = capacity ;
			nextIndex = 0;
		}
		return ans;
    }
};
int main(){
    	QueueUsingArray<int> q(5);

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);


	cout << q.front() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	cout << q.getSize() << endl;
	cout << q.isEmpty() << endl;
}


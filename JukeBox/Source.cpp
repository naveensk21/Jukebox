#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void create_a_song(); //function prototype
void Display_list();
void add_to_playlist();
void delete_from_playlist();
void display_playlist();

struct song {
	int year, songID;
	string song_name;
	string artist;
	int charge;
	song*next;
	
}*list, *newnode, *temp, *previous;

struct stack {
	int yr, sID;
	string sname;
	string art;
	int chrg;
	stack*stacknext;
	int top;

}*stacklist, *stacknewnode, *stacktemp;

struct queue {
	int yr2, sID2;
	string sname2;
	string art2;
	int chrg2;
	queue*queuenext;
}*queuelist, *queuenewnode, queuetemp, queueprevious;

int main() {
	int option;
	int sid = 0;
	list = NULL;//create the list;

	cout << "-----------------Main menu------------------";
	cout << "***Choose An Option Below***" << "\n";
	cout << "1. Create a song\n";
	cout << "2. Display the created list of songs\n";
	cout << "3. Add a song to Playlist \n";
	cout << "4. Delete a song from playlist\n";
	cout << "5. Display playlist\n";
	cout << "0. EXIT\n";
	cin >> option;
	while (option != -1) {

		

		if (option == 0) {
			break;
		}
		else if (option == 1) {
			create_a_song();
		}
		else if (option == 2) {
			Display_list();
		}
		else if (option == 3) {
			add_to_playlist();
		}
		else if (option == 4) {
			delete_from_playlist();
		}
		else if (option == 5) {
			display_playlist();
		}
		
	}

	system("PAUSE");
	return 0;

}
			
void create_a_song() {
	newnode = new song; // Dynamic memory allocation

	string sname;
	string arti;
	int yr;
	int sID;
	

	cout << "-------Create A Song-------\n";
	cout << "Enter the song ID: \n";
	cin >> sID;
	cout << "Enter Song Name: \n";
	cin >> sname;
	cout << "Enter Artist Name: \n";
	cin >> arti;
	cout << "Enter the released year of the song: \n";
	cin >> yr;
    
    if (yr == 2016){
        cout<<"Charge RM1"<<endl;
    }
    
    else {
		cout << "No charge" << endl;
    }

	newnode->songID = sID; //used to create new memory space
	newnode->song_name = sname;
	newnode->artist = arti;
	newnode->year = yr;
	
	newnode->next = NULL;
	if (list == NULL) {//empty list
		list = newnode;
	}

	else if (sID < list->songID) //if the value is less than the first node in the list
	{
		newnode->next = list; // step1: where it should point top what the list is pointing so it will get before the first value creat libk
		list = newnode; //the list will point to the new node
	}

	else
	{
		temp = list;
		while (temp != NULL)
		{
			if (sID > temp->songID) {
				previous = temp;
			}
			temp = temp->next;
		}
		newnode->next = previous->next;
		previous->next = newnode;
	}
}

		
void Display_list() {
	temp = list; // temp points to the list. traversing linked list

	while (temp != NULL) {
		cout << "";
		cout << "Song ID " << temp->songID << "\n";
		cout << "Song Name" << temp->song_name << "\n";
		cout << "Song Artist" << temp->artist << "\n";
		cout << "Year Released" << temp->year << "\n";

		temp = temp->next;//process the temp node
	}


}

/*void add_to_playlist() {
	stacknewnode = new stack; //dynamic memory allocation

	stacknewnode->sname = temp->song_name;
	stacknewnode->art = temp->artist;
	stacknewnode->yr = temp->year;
	stacknewnode->sID = temp->songID;
}*/

void delete_from_playlist() {
	temp = list;
	list = list->next; // copy values of list->next to list
	cout << "Song will be deleted from the playlist" << temp->songID;
	delete temp;
}

void display_playlist() {
	stacktemp = stacklist;// stacktemp to stacklist
	while (stacktemp !=NULL){
		cout << "Song ID " << stacktemp->sID;
		cout << "Song name" << stacktemp->sname;
		cout << "Song Year" << stacktemp->yr;
		cout << "Song Artist" << stacktemp->art;
		stacktemp = stacktemp->stacknext;
	}

}






create_a_song {
    newnode = new song;
    
    newnode->songID = sid;
    
    newnode->next =NULL;
    if (list==NULL) {
        
        list = newnode;
    }
    
    else if (Sid < list->Sid){
        
        newnode->next = list;
        list = newnode;
    }
    
    else {
        temp = list;
        while (temp!=NULL){
            if (sid > list->sid){
                
                previous = temp;
            }
            temp = temp->next;
        }
        newnode->next=previous->next;
        previous->next = newnode;
        
    }
}



















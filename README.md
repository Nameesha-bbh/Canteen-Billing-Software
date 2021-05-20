# Canteen-Bill-System

PROBLEM : A canteen which sells chats and chinese food requires a software for billing purpose.

We have created a software which can take orders , update orders , delete orders and show the final bill in the screen and in a file.

We have written the software  in c++.We have used concepts like classes , objects , inheritence , exceptional handling and file handling.

There are two classes : 
1.Canteen – It has 3 member functions. displayOrder() displays the menu . TakeOrder() takes the order from the user and decrease() is used to update(decrease number              of plates) orders. 
            It  has many variables like pp,mp,bp,sc,s,vb,vn,en,total.

2.Billing – This  class is the child class of Canteen.It inherits all its functions and variables.This class has two member functions.One shows the bill in terminal              and the other shows it in a file.
            These two functions require data from / inherits variables from Canteen class . 

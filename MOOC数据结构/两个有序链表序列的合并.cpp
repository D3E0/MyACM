List Merge( List L1, List L2 )
{
	List temp1 = L1->Next;
	List temp2 = L2->Next;
	List L3,p;
	p = (List)malloc(sizeof(struct Node)); 
	p->Next = NULL;
	L3 = p;
	while(temp1 != NULL || temp2 != NULL)
	{	
	    if(temp2 != NULL && temp1 == NULL)
	    {
		    L3->Next = temp2;
		    temp2 = temp2->Next;
	    }
	    else if(temp1 != NULL && temp2 == NULL)
	    {
		    L3->Next = temp1;
		    temp1 = temp1->Next;
	    }	
		else if(temp1->Data < temp2->Data)
		{
			L3->Next = temp1;
			temp1 = temp1->Next;
		}
		else
		{
			L3->Next = temp2;
			temp2 = temp2->Next;	
		}		
		L3 = L3->Next;
	}
	L1->Next=NULL;  
    L2->Next=NULL;  
	L3->Next = NULL;  
	return p;
}

merge(L,[],L).  %When second List2 is empty List3 is equal to List1
merge([],K,K).  %When first List1 is empty List3 is equal to List2
 
/*If The Head of List1 is lesser than the List2, 
Then List1 and List3 have same head*/
merge([HX|TX],[HY|TY],[HX|M]) :- HX < HY, merge(TX,[HY|TY],M).
 
/*If The Head of List1 is greater than equal to List2, 
Then List2 and List3 have same head*/  
merge([HX|TX],[HY|TY],[HY|M]) :- HX >= HY, merge([HX|TX],TY,M).

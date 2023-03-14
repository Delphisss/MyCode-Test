


/*

สมมุติให้มีเกมไพ่อยู่เกมหนึ่งมีการจัด Rank ของไพ่โดยพิจารณาจากเลขหรือตัวอักษรบนไพ่ ซึ่งสามารถเรียกลำดับจาก Rank มากไปน้อยได้ดังนี้
         2 > A > K > Q > J > 10 > 9 > 8 > 7 > 6 > 5 > 4 > 3 
โดยเลข 2 จะเป็นไพ่ที่มี Rank สูงที่สุด และ เลข 3 จะเป็นไพ่ที่มี Rank ตำที่สุด      
กรณีไพ่ที่มีเลขหรือตัวอักษรเดียวกัน ก็จะพิจารณาที่ดอกต่อ ซึ่งสามารถเรียกลำดับจาก Rank ของแต่ละดอกได้ดังนี้
        SPADE > HEART > DIAMOND > CLUB      
โดยไพ่ที่มีเลขหรือตัวอักษรเดียวกันนั้น จะถือว่า SPADE มี Rank ที่สูงที่สุด และ CLUB  มี Rank ที่ต่ำที่สุด    
จากข้อมูลที่กำหนดให้นี้ ส่งเขียนนิยามของ Class หรือ Structure Card พร้อม Constructor และ operator > ให้สอดคล้องกับรายละเอียดและ ตัวอย่างการใช้งานด้านล่างนี้   
1.Card จะต้องมี Data member อย่างน้อย 2 ตัว ชื่อ face แบะ suit โดยกำหนดให้เป็น Public (ในการเขียนท่านอาจจะมี Data member มากกว่า 2 ตัวนี้ได้)
2.Data member face จะเก็บข้อมูลเลขหรือตัวอักษรบนหน้าไพ่ (uppercase) ซึ่งเป็นไปได้ทั้งหมด 13 ค่า คือ 2,3,4,5,6,7,8,9,10,J,Q,K,A
3.Data member suit จะเก็บข้อมูลดอกของไพ่ (uppercase) ซึ่งเป็นไปได้ทั้งหมด 4 ค่า คือ SPADE, HEART, DIAMOND, CLUB              
4.Constructor ของ Class Card  จะรับ Input มาเป็น string 1 ตัว ที่เริ่มต้นด้วยชื่อดอก ตามด้วยช่องว่าง 1 ช่อง และตามด้วยเลขหรือตัวอักษรบนหน้าไพ่ โดยตัวอักษรอาจจะเป็น uppercase หรือ lowercase ปนกันอย่างไรก็ได้ เช่น Card("SpaDe k")
5.operator > จะใช้ในการเปรียบเทียบ Rank ของ Card 2 ใบ โดยจะ Return ผลลัพธ์เป็นค่าประเภท bool ในกรณีที่ Card ด้านขวามี Rank ที่สูงกว่าด้านซ้ายจะ Return ค่าเป็น true และ กรณีที่ Card ด้านขวามี Rank ที่ไม่สูงกว่าด้านซ้ายก็จะ Return ค่าเป็น false

For example:

Test
	     
Card x = Card("CLUB A");
cout << x.suit;
Result 
CLUB

Card x = Card("SPADE 2");
cout << x.face;
Result 
2

Card x = Card("DiamonD k");
cout << x.face << "\n" << x.suit;
Result
K
DIAMOND

Card x = Card("Heart 10");
cout << x.face << "\n" << x.suit;
Result
10
HEART

cout << (Card("Spade 10") > Card("Spade 2"));
Result
0

cout << (Card("CLUB 2") > Card("Spade 2"));
Result
0

cout << (Card("Diamond A") > Card("Heart 4"));
Result
1

cout << (Card("SPADE A") > Card("SPADE 4"));
Result
1

cout << (Card("Heart K") > Card("heart Q"));
Result
1

*/
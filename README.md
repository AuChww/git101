# GitHub Classroom 101

## ขั้นตอนการปฏิบัติ

1. Clone repository นี้ ไปไว้เป็น local repository ที่เครื่องของนิสิต
2. ศึกษารูปแบบของภาษา Markdown จาก [Basic Writing and formatting syntax](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
3. สร้างไฟล์ `student.md` โดยใช้ภาษา Markdown เขียนเนื้อหาในไฟล์เป็นข้อมูลนิสิต ได้แก่ ชื่อ นามสกุล ชื่อเล่น และรหัสนิสิต โดยใช้รูปแบบของภาษา Markdown ที่เหมาะสม แล้วสร้าง commit ของขั้นตอนนี้
4. สร้างไฟล์ `problem.md` โดยใช้ภาษา Markdown เขียนเนื้อหาในไฟล์เป็นโจทย์ปัญหาสำหรับเขียนโปรแกรมที่นิสิตชอบ โดยมีคำอธิบายโจทย์ปัญหา ลักษณะของข้อมูลเข้า ลักษณะของข้อมูลออก และตัวอย่างข้อมูลเข้า/ข้อมูลออก โดยใช้รูปแบบของภาษา Markdown ที่เหมาะสม แล้วสร้าง commit ของขั้นตอนนี้
5. สร้างไฟล์ `program.c` โดยมีเนื้อหาในไฟล์เป็นโปรแกรมโค้ดภาษาซีที่แก้ปัญหาจากไฟล์ `problem.md` แล้วสร้าง commit ของขั้นตอนนี้
6. แก้ไขไฟล์ `README.md` โดยเพิ่มหัวข้อ `วิธีการรันไฟล์` จากนั้นเขียนอธิบายคำสั่งที่ใช้ในการ compile และการรันไฟล์ `program.c` แล้วสร้าง commit ของขั้นตอนนี้
7. ใช้คำสั่ง `git log --all --decorate --oneline --graph` และให้นิสิตจับภาพหน้าจอผลลัพธ์จากการใช้คำสั่งนี้
8. นำภาพหน้าจอจากข้อ 7 ตั้งชื่อไฟล์ภาพว่า `git-log-adog.png` แล้วสร้าง commit ของขั้นตอนนี้
9. push repository นี้กลับมาที่ GitHub Classroom

## วิธีการรันไฟล์
1. cd <folder ที่เก็บไฟล์นั้นไว้>
2. gcc program.c -o program
3. gcc program.c จะเป็นการรันโค๊ด
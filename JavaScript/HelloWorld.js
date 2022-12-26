// // "use strict";
// // // // alert("Hello,world!");
// // // let admin,
// // //     name;
// // // name="John";
// // // admin=name;
// // // console.log(admin);
// // // let a=Infinity;
// // // console.log(a);
// // // // noinspection UnnecessaryLocalVariableJS
// // // let b=NaN;
// // // console.log(b);
// // // let c=1234567890123456789012345678901234567890n;
// // // console.log(c);
// // // console.log(`Hello,${c}`);
// // // let newVar=4>1;
// // // console.log(newVar);
// // // let newVar2=null;
// // // console.log(newVar2);
// // // console.log(typeof undefined);
// // // console.log(typeof a);
// // // console.log(typeof c);
// // // console.log(typeof newVar2);
// // // console.log(typeof alert);
// // // console.log(typeof null);
// // // let name = "Ilya";
// // //
// // // console.log( `hello ${1}` ); // ?
// // //
// // // console.log( `hello name` ); // ?
// // //
// // // console.log( `hello ${name}` ); // ?
// // // let age=prompt("Your age",10000);
// // // alert(`You are ${age} years old.`)
// // // let button=confirm("Are u all right?")
// // // alert(button);
// // // let value = true;
// // // alert(typeof value); // boolean
// // //
// // // value = String(value); // 现在，值是一个字符串形式的 "true"
// // // alert(typeof value); // string
// // // let val="2";
// // // alert(val/'2');
// // // let a="";
// // // alert(a===0);
// // // let apples = "2";
// // // let oranges = "3";
// // //
// // // // 在二元运算符加号起作用之前，所有的值都被转化为了数字
// // // alert(+apples+ +oranges ); // 5
// // // let user;
// // // let b=user??"匿名";
// // // while(1){
// // //     let a = +prompt("Input a number >100",'');
// // //     if(a>100||a==='')break;
// // // }
// // // confirm("Are you all right?")
// // // let max=(a,b)=>a>b?a:b;
// // // let min=(a,b)=>a<b?a:b;
// // // alert(max(1,2));
// // // alert(min(1,2));
// // // let salaries={
// // //     John: 100,
// // //     Ann: 160,
// // //     Pete: 130,
// // // };
// // //
// // // alert(getSalary(salaries));
// // // function getSalary(obj) {
// // //     let sum=0;
// // //     for(let key in obj){
// // //         sum+=salaries[key];
// // //     }
// // //     return sum;
// // // }
// // // 在调用之前
// // // let menu = {
// // //     width: 200,
// // //     height: 300,
// // //     title: "My menu"
// // // };
// // //
// // // multiplyNumeric(menu);
// // //
// // // // 调用函数之后
// // // menu = {
// // //     width: 400,
// // //     height: 600,
// // //     title: "My menu"
// // // };
// // //
// // // function multiplyNumeric(obj){
// // //     for(let key in obj){
// // //         if(typeof obj[key]==="number"){
// // //             obj[key]*=2;
// // //         }
// // //     }
// // // }
// // // alert(menu.width);
// // // alert(menu.height)
// // // alert(menu.title);
// // // let user = {
// // //     name: "John",
// // //     age: 30
// // // };
// // //
// // // let clone = { ...user };
// // // alert(clone.name);
// // // alert(clone.age);
// // // clone.name=1;
// // // clone.age=1;
// // // alert(clone.name);
// // // alert(clone.age);
// // // alert(user.name);
// // // alert(user.age);
// // // let a={...user
// // // };javascript:
// function User(name) {
//     this.name = name;
//
//     this.sayHi = function() {
//         alert( "My name is: " + this.name );
//     };
// }
//
// let john = new User("John");
//
// john.sayHi(); // My name is: John
// let user;
// alert(user?.name)
// let a=prompt("Give me a num");
// alert(a);
//null == undefined;
//  [] == [];
//  '23'= 23;
//  45 == [45];
//  false == undefined;
//  "" == [null];
//  {} + {};
//  false + 1
// alert(null == undefined) //true
// alert([] == []) //false
// alert('23'== 23) //
// alert(45 == [45])
// alert(false == undefined)
// alert("" == [null])
// alert({} + {})
// alert(false + 1)
// ["Bilbo", "Gandalf", "Nazgul"].forEach(alert);
// const arr = [NaN];
// alert( arr.indexOf(NaN) ); // -1（错，应该为 0）
// alert( arr.includes(NaN) );// true（正确）
// alert(arr.includes(undefined));
// let users = [
//     {id: 1, name: "John"},
//     {id: 2, name: "Pete"},
//     {id: 3, name: "Mary"},
// ];
// users.toString=function (){
//     return users.map(user=>user.id+" "+user.name).join("\n");
// }
// alert(users.toString());
// window.close()



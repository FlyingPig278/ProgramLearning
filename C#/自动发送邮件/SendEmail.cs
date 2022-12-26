using System;
using System.Net;
using System.Net.Mail;
using System.Text.RegularExpressions;

namespace SendEmail
{
    class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            // 分别设置您的电子邮件地址、授权码、和接受者的电子邮件地址
            Console.WriteLine("请输入您的电子邮件地址：");
            string YourEmailAddress = Console.ReadLine();
            Console.WriteLine("请输入您的授权码：");
            string password = Console.ReadLine();
            Console.WriteLine("请输入接受者的电子邮件地址：");
            string ReceiverEmailAddress = Console.ReadLine();

            // 设置电子邮件主题和正文
            Console.WriteLine("请输入电子邮件标题：");
            string subject = Console.ReadLine();
            Console.WriteLine("请输入电子邮件正文：");
            string body = Console.ReadLine();

            // 进行确认
            confirm:
            Console.WriteLine("是否确认以下信息？\n");
            Console.WriteLine("你的电子邮件地址：" + YourEmailAddress);
            Console.WriteLine("你的授权码：" + password);
            Console.WriteLine("接受者的电子邮件地址：" + ReceiverEmailAddress);
            Console.WriteLine("电子邮件标题：" + subject);
            Console.WriteLine("电子邮件正文：" + body);
            Console.WriteLine("输入1确认发送，输入2进行修改，输入3结束程序");
            string confirm = Console.ReadLine();

            switch (confirm)
            {
                case "1":
                    bool flag=true;
                    verify:
                    // 验证电子邮件地址是否有效
                    Regex regex = new Regex(@"^[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*$");
                    if (!regex.IsMatch(YourEmailAddress))
                    {
                        Console.WriteLine("\n你的电子邮件地址无效，请重新输入。");
                        Console.WriteLine("请输入新的电子邮件地址：");
                        YourEmailAddress = Console.ReadLine();
                        flag=false;
                        goto verify;
                    }
                    if (!regex.IsMatch(ReceiverEmailAddress))
                    {
                        Console.WriteLine("\n接受者的电子邮件地址无效，请重新输入。");
                        Console.WriteLine("请输入新的接受者的电子邮件地址：");
                        ReceiverEmailAddress = Console.ReadLine();
                        flag=false;
                        goto verify;
                    }
                    if(password=="")
                    {
                        Console.WriteLine("\n你提供的授权码为空，请重新输入：");
                        Console.WriteLine("请输入新的授权码：");
                        password = Console.ReadLine();
                        flag=false;
                        goto verify;
                    }
                    if(subject=="")
                    {
                        Console.WriteLine("\n你提供的标题为空，请重新输入：");
                        Console.WriteLine("请输入新的标题：");
                        subject = Console.ReadLine();
                        flag=false;
                        goto verify;
                    }
                    if(body=="")
                    {
                        Console.WriteLine("\n你提供的正文为空，请重新输入：");
                        Console.WriteLine("请输入新的正文：");
                        body = Console.ReadLine();
                        flag=false;
                        goto verify;
                    }
                    if(flag==false) goto confirm;
                    // 发送电子邮件
                    try
                    {   
                        Console.WriteLine("已确认发送，发送中");
			            MailMessage mail = new MailMessage{
                        From = new MailAddress(YourEmailAddress),
                            Subject = subject,
                            Body = body
                        };
                        mail.To.Add(new MailAddress(ReceiverEmailAddress));

                        SmtpClient client = new SmtpClient("smtp.qq.com"){
                            Credentials = new NetworkCredential(YourEmailAddress, password),
                            EnableSsl = true
                        };
                        client.Send(mail);
	            		Console.WriteLine("发送成功");
                    }
                    catch (SmtpException ex)
                    {
                        string errorMessage;
                        switch (ex.StatusCode)
                        {
                            // case SmtpStatusCode.AuthenticationFailed:
                            //     errorMessage = "身份验证失败";
                            //     break;
                            case SmtpStatusCode.InsufficientStorage:
                                errorMessage = "\n存储空间不足";
                                break;
                            case SmtpStatusCode.MailboxUnavailable:
                                errorMessage = "\n邮箱不可用";
                                break;
                            default:
                                errorMessage = "\n未知错误：" + ex.StatusCode;
                                break;
                        }

                        Console.WriteLine("发送电子邮件时出错：" + errorMessage);
                        Console.WriteLine("是否重试？");
                        retry:
                        Console.WriteLine("1.修改信息");
                        Console.WriteLine("2.退出程序");
                        switch (Console.ReadLine())
                        {
                            case "1":
                                goto modify;
                            case "2":
                                return;
                            default:
                                goto retry;
                        }
                    }
                    break;
                case "2":
                    Console.WriteLine("\n已进入修改模式\n");
                    modify:
                    Console.WriteLine("请选择要修改的值：\n");
                    Console.WriteLine("1. 修改完成");
                    Console.WriteLine("2. 你的电子邮件地址:" + YourEmailAddress);
                    Console.WriteLine("3. 你的授权码：" + password);
                    Console.WriteLine("4. 接受者的电子邮件地址：" + ReceiverEmailAddress);
                    Console.WriteLine("5. 电子邮件标题：" + subject);
                    Console.WriteLine("6. 电子邮件正文：" + body);
                    Console.WriteLine("7. 结束程序");
                    string selection = Console.ReadLine();
                    switch (selection)
                    {
                        case "1":
                            goto confirm;
                        case "2":
                            Console.WriteLine("\n请输入新的电子邮件地址：");
                            YourEmailAddress = Console.ReadLine();
                            goto modify;
                        case "3":
                            Console.WriteLine("\n请输入新的授权码：");
                            password = Console.ReadLine();
                            goto modify;
                        case "4":
                            Console.WriteLine("\n请输入新的接受者的电子邮件地址：");
                            ReceiverEmailAddress = Console.ReadLine();
                            goto modify;
                        case "5":
                            Console.WriteLine("\n请输入新的电子邮件标题：");
                            subject = Console.ReadLine();
                            goto modify;
                        case "6":
                            Console.WriteLine("\n请输入新的电子邮件正文：");
                            body = Console.ReadLine();
                            goto modify;
                        case "7":
                            return;
                        default:
                            Console.WriteLine("\n无效输入，请重试。\n");
                            goto modify;
                    }

                case "3":
                    return;

                default:
                    Console.WriteLine("\n无效输入，请重试。\n");
                    goto confirm;
            }
            Console.ReadLine();
        }
    }
}
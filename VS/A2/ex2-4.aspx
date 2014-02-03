<%@ Page Language="C#" AutoEventWireup="true" CodeFile="ex2-4.aspx.cs" Inherits="A2_ex2_4" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    Thank you for contacting the service department. Please enter your name, email, and a brief message. We will respond to you withing 24 hours.
    <br />
        <asp:Label ID="lblName" runat="server" Text="Name: "></asp:Label>
        <asp:TextBox ID="txtName" runat="server"></asp:TextBox>
    <br />
        <asp:Label ID="lblEmail" runat="server" Text="Email: "></asp:Label>
        <asp:TextBox ID="txtEmail" runat="server"></asp:TextBox>
    <br />
        <asp:Label ID="lblMessage" runat="server" Text="Message: "></asp:Label>
    <br />        
        <asp:TextBox ID="txtMessage" runat="server" Height="100px" TextMode="MultiLine" Width="200px"></asp:TextBox>
    <br />
        <asp:Button ID="btnSubmit" runat="server" Text="Submit" 
            onclick="btnSubmit_Click" /> &nbsp;
        <asp:Button ID="btnClear" runat="server" Text="Clear Form" 
            onclick="btnClear_Click" />
    <br />
        <asp:Label ID="lblResult" runat="server" Text="Label" Visible="False"></asp:Label>

    </div>
    </form>
</body>
</html>

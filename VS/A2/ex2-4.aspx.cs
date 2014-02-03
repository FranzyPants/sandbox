using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class A2_ex2_4 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void btnClear_Click(object sender, EventArgs e)
    {
        txtName.Text = "";
        txtEmail.Text = "";
        txtMessage.Text = "";
        lblResult.Visible = false;
    }
    protected void btnSubmit_Click(object sender, EventArgs e)
    {
        lblResult.Visible = true;
        lblResult.Text = "Thank you for your feedback, " + txtName.Text + "!";
    }
}
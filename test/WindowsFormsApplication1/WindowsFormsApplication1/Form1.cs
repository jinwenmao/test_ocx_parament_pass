using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int ttt = 10;
            this.axTest_ocx_parament_array1.Tests1(ref ttt);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int count = 5;
            Int32[] tt = new Int32[count];
            for (int i = 0; i < count;i++ )
            {
                tt[i] = i;
            }
            object x = new System.Runtime.InteropServices.VariantWrapper(tt);
            //object[] x = new object[20];
           // object x = tt;
            //x = tt;
            //var xx = tt;
            axTest_ocx_parament_array1.TestVar(ref x);
           

        }

        private void button3_Click(object sender, EventArgs e)
        {
             int count = 5;
           // Int32[] tt = new Int32[count];
             string[] tt = new string[count];
            for (int i = 0; i < count;i++ )
            {
                //tt[i] = i+1;
                tt[i] = (i+100).ToString();
            }
            object x = new System.Runtime.InteropServices.VariantWrapper(tt);
            axTest_ocx_parament_array1.testSendVar(ref x);
        }
    }
}

void hmiGear(){
    if(dur>=700&&dur<=900)
    {
    Serial3.print("t");
    Serial3.print("1");
    Serial3.print(".");
    Serial3.print("txt=");
    Serial3.print("\"");
    Serial3.print("1");
    Serial3.print("\"");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);

    Serial3.print("t1");       //65535 White colour
    Serial3.print(".");
    Serial3.print("pco");
    Serial3.print("=");
    Serial3.print("65535");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);
    
    }

    if(dur>=920&&dur<=1200)
    {
    Serial3.print("t");
    Serial3.print("1");
    Serial3.print(".");
    Serial3.print("txt=");
    Serial3.print("\"");
    Serial3.print("N");
    Serial3.print("\"");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);

    Serial3.print("t1");       //34800 green colour
    Serial3.print(".");
    Serial3.print("pco");
    Serial3.print("=");
    Serial3.print("34800");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);
    }

    if(dur>=1220&&dur<=1500)
    {
    Serial3.print("t");
    Serial3.print("1");
    Serial3.print(".");
    Serial3.print("txt=");
    Serial3.print("\"");
    Serial3.print("2");
    Serial3.print("\"");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);

    Serial3.print("t1");       //65535 White colour
    Serial3.print(".");
    Serial3.print("pco");
    Serial3.print("=");
    Serial3.print("65535");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);
    }

    if(dur>=1520&&dur<=2000)
    {
    Serial3.print("t");
    Serial3.print("1");
    Serial3.print(".");
    Serial3.print("txt=");
    Serial3.print("\"");
    Serial3.print("3");
    Serial3.print("\"");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);

    Serial3.print("t1");       //65535 White colour
    Serial3.print(".");
    Serial3.print("pco");
    Serial3.print("=");
    Serial3.print("65535");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);
    }


    if(dur>=2020&&dur<=2500)
    {
    Serial3.print("t");
    Serial3.print("1");
    Serial3.print(".");
    Serial3.print("txt=");
    Serial3.print("\"");
    Serial3.print("4");
    Serial3.print("\"");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);

    Serial3.print("t1");       //65535 White colour
    Serial3.print(".");
    Serial3.print("pco");
    Serial3.print("=");
    Serial3.print("65535");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);
    }

    if(dur>=2520&&dur<=3000)
    {
    Serial3.print("t");
    Serial3.print("1");
    Serial3.print(".");
    Serial3.print("txt=");
    Serial3.print("\"");
    Serial3.print("5");
    Serial3.print("\"");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);

    Serial3.print("t1");       //65535 White colour
    Serial3.print(".");
    Serial3.print("pco");
    Serial3.print("=");
    Serial3.print("65535");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);
    }
    
    if(dur>=3020&&dur<=3500)
    {
    Serial3.print("t");
    Serial3.print("1");
    Serial3.print(".");
    Serial3.print("txt=");
    Serial3.print("\"");
    Serial3.print("6");
    Serial3.print("\"");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);

    Serial3.print("t1");       //65535 White colour
    Serial3.print(".");
    Serial3.print("pco");
    Serial3.print("=");
    Serial3.print("65535");
    Serial3.write(0xff);
    Serial3.write(0xff);
    Serial3.write(0xff);
    }
}

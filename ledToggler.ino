//Particle cloud function

//Leds is connected to D6,D5,D4
int red = D6; 
int blue = D5; 
int yellow = D4; 

int toggler(String value);

void setup() {


    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(yellow, OUTPUT);

    Particle.function("toggl", toggler);

}


//toggle function
int toggler(String value)
{

    if(value == "On Red")
    {
        digitalWrite(red,HIGH);

    }
    else if (value == "Off Red")
    {
        digitalWrite(red,LOW);

    }
    else if (value == "On Blue")
    {
        digitalWrite(blue,HIGH);

    }
    else if (value == "Off Blue")
    {
        digitalWrite(blue,LOW);

    }
    else if (value == "On Yellow")
    {
        digitalWrite(yellow,HIGH);

    }
    else if (value == "Off Yellow")
    {
        digitalWrite(yellow,LOW);

    }
    else 
    {
        
    }
}


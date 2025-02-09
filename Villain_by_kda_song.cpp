// Typing the song
#include <iostream>
#include <windows.h>
using namespace std;

void typing(string lyrics)
{
    for (char c : lyrics)
    {
        cout << c;
        Sleep(100);
    }
}

int main()
{
    // Lyrics
    const string lyrics = R"(On the low, only love myself, no more
Take you to the grave, I'll ghost
I know I can be so cold
In the dark, where I like to keep my heart
Know I'm all bite, no bark
Like to catch you way off guard
I'll stay so deep inside your brain
And take you somewhere far away
Time to roll the dice, you know I'm the type
Type to risk my life, not afraid to die
Type to make you cry, type to put a price
All up on your head, do just what I said
I'm a straight up villain, straight up villain
Yeah, no feelin', yeah, no feelin'
Straight up villain, straight up villain
Yeah, no feelin', yeah, no feelin'
I'm alive, but I'm dead
Hear my voice up in your head
Watch it fill you full of dread 'til you go
Is it really a surprise if I'm playing with your mind?
And I treat you like a prize then I throw you to the side?
Am I really that bad if I love to make you mad?
And get happy when you're sad?
Only care about a bag
In control
That's how I like it and I'm never letting go, na-ah-ah
Never had a soul (soul)
So you ain't taking nothing from me when you go, na-ah-ah
I'll stay so deep inside your brain
And take you somewhere far away
Time to roll the dice, you know I'm the type
Type to risk my life, not afraid to die
Type to make you cry, type to put a price
All up on your head, do just what I said
I'm a straight up villain, straight up villain
Yeah, no feelin', yeah, no feelin' (yeah-yeah)
Straight up villain, straight up villain
Yeah, no feelin', yeah, no feelin' (woo)
I'm alive, but I'm dead
Hear my voice up in your head
Watch it fill you full of dread' til you go (a-ah, pow)
Bang, bang, you can do anything
No fear, no pain, listen to your brain, go
Go stupid, go dumb, go stupid, and...
And then we go insane, whoa
Just do what I say
Follow me, I'll lead the way
Time to roll the dice, you know I'm the type
Type to risk my life, not afraid to die
Type to make you cry, type to put a price
All up on your head, do just what I said
I'm a straight up villain, straight up villain
Yeah, no feelin', yeah, no feelin'
Straight up villain, straight up villain (yeah)
Yeah, no feelin', yeah, no feelin' (woo)
I'm alive, but I'm dead
Hear my voice up in your head
Watch it fill you full of dread 'til you go (ah, pow))";
    
    typing(lyrics);

    return 0;
}

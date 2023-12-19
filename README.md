# bug-free-train


## TDD in states and moves

![tdd in states and moves](http://tinyurl.com/bdhk8apt)

## setup

    python -m venv virtualenv
    source virtualenv/bin/activate
    which python        # which 
    pip install pytest
    pytest

    pip install pytest-watch
    ptw             # enjoy continuous test
## kit
- game ruleset and kit at https://willemlarsen.github.io/mobprogrammingrpg/
- mob timer
	- (basic - first dojo) when hosted by game master http://mobster.cc/ (use “learn to mob” button to see scoring)
	- (advanced) when git handover https://mob.sh/

## day 16
## white
    3 participants M,A,G. 
        1st hour of practice ; mob programming with scoring

        2nd hour convo and notes; "what is your passion"
        got speaking ("Say") working on M's rig, 
            so "mob start 5" works better.

## yellow 
    good to have 3 people here;
    liked having a skilld pythong person, for quck q & a
        "lifts all boats", e.g. "a learned of : in python"


## day 15

### white hat
    participants. 2 m,a.
    today: adrs on variety topics, beginning with "why not whatsapp"
    tried WhatsApp & took notes in docs/adr
    not dojo; pair writing session whose work product was our first ADR

### yellow hat
    enjoyed bringing new things to attention
    it was a work session, not practice session


## day 10

### white hat
    2 participants. M and A. first half hour at least getting zoom set... audible problems a hang..
    wonder: why stipulate rest API not web sockets? 
            REST is fundamentally client-server, but this is a poor fit with DM, which is push.
            
    Something different:
        try open python nostr client to DM our phones
        through open source and web hooks

        https://nostr.com/

        First salvo. tried pip install nostr-sdk
            ERROR: Could not find a version that satisfies the requirement nostr-sdk (from versions: none)
            ERROR: No matching distribution found for nostr-sdk

        Secnod salvo. try pip install nostr
            dno't see dm example

        Third salvo. try  pip install nostrpy  of https://pypi.org/project/nostrpy/

        independent study last 30 minutes, goal: "dm other's phone from phython"
        success.  See dm-experiment-a.md and nostrcnofig.hcl 

        granted, this was python cli (wanted to do python repl)...

### yellow hat
    vibrated A phone over encrypted dm from python; sent to M phone (no vibrate but it worked)

### green hat
    q how with mob programming the two of us, how decide who's navigator, who's driver, when three.
    a begin of day, random order, (flip coins), then fixed rotaiion driver-navigator-mobber for the day
    
    q monday? short day for M - dentist; 30m then go.
    a demo day of whatever you want! 15m each. 
        a: plans to do encryped DM as today but from python repl not cli
        m: tbd or just chill

## day 9

    Jeremy wuz here - again
    Alan entered the room, finally

### white hat
    got Jeremy going on python and mob timer 
    small refactor of test_primes to use functional style map()
        vs repeat
    ran pylint and fixed some warnings and cosmetic defects
    returned to zoom from gather town
    could end up with confusion with the timer tool when there are three people (role rotations)
    forget to share screen in zoom

### yellow hat
    good to see Jeremy again after the trip
    glad we got through the logistics of getting Jeremy setup

### green hat
    tomorrow: Roman numerals

## day 8

### white hat
    Michael had 3.11 python going
    Alan tried desktop gather town - sound as good or better
    factor to googol
    learned // integer division
    python float precision probably 80 bits
    integers apparently infinite
    used recursive algorithm
    c# convention of "try_" for predicate function seemed better
    still wondering why mob.sh timer doesn't use default

### yellow hat

    Alan: good quality sound
    faster start, because tools just worked (not new, not failing)
    Michael fact that Alan is satisfied with factor
    M: Python's integer division operator is pretty cute
    A: liked that M solved it
    
### green hat. 
    we got value of prime factors; move onto something new tomorrow  (roman numerals)


## day 7
Tuesday. Day 7.
    Tuesday. .. mike could not her alan, nor see, maybe it was alan vpn; refresh GT and it seems to be working...

    GT sound is dead.... dunno why.. going with ma belll iPhone..

    GT sound works over Chrome, but A can't share screen (permissions). granted. Recap:
        Now on chrome, alan can share screen, alan can talk, mike can hear, alan can see mike, can't hear Mike over GT... hm...
        I guess 30 minutes in... revert to ma bell..

    Alan here, 2nd time; working to get mike set...

    Michael

### white hat
    pytest working on both machines
    ran a few tests up to 4
    use mob git handover for collaboration
    each got to use own IDE
    python "match" requires 3.11
    2 hours, 2 participants
    used some rudimentary markdown for README.md
    used vertically split screen (Michael)

### yellow
    all white hat stuff was great
    esp. mob.sh handover 7 -10min increments: flow


Mon. Day 6. Blink retro.

# white hat
   got M and A working on git handover 
   went to telephone sound -- gt unrelable A

# yellow hat
    push mob timer at end! 
    new tool -- no more VS code liveshare  dependency.

# green
    tomorrow. primes

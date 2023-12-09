dm-experiment-a.md
dm experiment a py
```
goal: dm X through python nostr client 
Mike's npub npub1v7sct4n7l4nesfxj5x9e2f8jwcp9n9y3zd5qnm67wqtgwvaxndzqkk2z40

##question 1. why nostr not from a-soc code? 
##answer 1. we don't have access to a-soc

##question 2. why web socket not rest? 
##answer 2. rest is client/server; dm is push not cilent-server; nostr works this way, 
over web socket, not client-server. Seems better design; would need to see the ADR on why REST Is best for our context.  Absent that we're going with open model of web socket that has hundreds of thousands of clients. 


following https://pypi.org/project/nostrpy/


send encrypted dm Ali to M

nostr message send -s nsec1taj9995pj42c03zul2gm78vvsh2apz3tfdzngje6xpem770320gspwsyr7 -m "Hello, A sending an encryped direct message to M" -p npub1v7sct4n7l4nesfxj5x9e2f8jwcp9n9y3zd5qnm67wqtgwvaxndzqkk2z40



send encrypted dm Ali to A

nostr message send -s nsec1taj9995pj42c03zul2gm78vvsh2apz3tfdzngje6xpem770320gspwsyr7 -m "Hello, FA sending an encryped direct message to AW" -p npub14wekkdsh6vg3n6skc50h4plrrx9ck60r9lk96ypusenyj4ccq5nqnumste
```
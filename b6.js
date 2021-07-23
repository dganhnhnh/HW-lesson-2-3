let songs = ["Hayloft", "Vertigo", "Teenagers", "Boilermaker", "Jumpsuit", "Elephant", "Black Roller Coming", "Heathens"];
let artists = ["Mother Mother", "Alice Merton", "My Chemical Romance", "Royal Blood", "21 Pilots", "Tame Impala", "Phillip Sayce", "21 Pilots"];
let playlist = {}; let playlist_reverse ={};

for (let i=0; i<songs.length; i++){
    playlist[songs[i]] = artists[i];
}
for (let i=0; i<songs.length; i++){
    playlist_reverse[artists[i]] = songs[i];
}
console.log(playlist); console.log(playlist_reverse); 


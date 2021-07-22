const filmList = [
    {
        "name": "Paris, Texas",
        "country": "USA",
        "year": 1984,
        "director": "Wim Wenders",
        "watchedStatus": true
    },
    {
        "name": "Three Seasons",
        "country": "Vietnam",
        "year": 1999,
        "director": "Tony Bui",
        "watchedStatus": false
    },
    {
        "name": "Chungking Express",
        "country": "Hong Kong",
        "year": 1994,
        "director": "Wong Kar-wai",
        "watchedStatus": true
    },
    {
        "name": "Cemetery of Splendour",
        "country": "Thailand",
        "year": 2015,
        "director": "Apichatpong Weerasethakul",
        "watchedStatus": false
    },
    {
        "name": "The Scent of Green Papaya",
        "country": "Vietnam",
        "year": 1992,
        "director": "Tran Anh Hung",
        "watchedStatus": false
    },
    {
        "name": "Parasite",
        "country": "South Korea",
        "year": 2019,
        "director": "Bong Joon-ho",
        "watchedStatus": true
    },
    {
        "name": "Before Sunrise",
        "country": "USA",
        "year": 1995,
        "director": "Richard Linklater",
        "watchedStatus": true
    },
    {
        "name": "Breathless",
        "country": "France",
        "year": 1960,
        "director": "Jean-Luc Godard",
        "watchedStatus": false
    },
    {
        "name": "Cyclo",
        "country": "Vietnam",
        "year": 1994,
        "director": "Tran Anh Hung",
        "watchedStatus": true
    }
]
//a
for (let i=0; i< filmList.length; i++){
    if (filmList[i]["country"] === "Vietnam"){
        console.log(filmList[i]["name"])
    }
}

//b
let directors =[]; 
for (let i=0; i< filmList.length; i++){
    directors.push(filmList[i]["director"]);

}

function mostFrequent(arr){
    var max = arr[0];
    let counter =[]; 
    for (let i=0; i< arr.length; i++){
        counter.push(0);
    }
    for (let i=0; i< arr.length; i++){
        for (let j=0; j< arr.length; j++){
            if (arr[j] === arr[i]){counter[i]++;}
        }
    }
    let temp = counter[0];
    for (let i=0; i< counter.length; i++){
        if (counter[i] > temp){
            temp = counter[i];
            max = arr[i];}
        
    }
    return max;
}
console.log(mostFrequent(directors));




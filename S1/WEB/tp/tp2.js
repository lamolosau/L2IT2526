function estPalindrome(mot){
    mot = mot.toLowerCase()
    let inverse = ""
    for(let i=mot.length-1; i>=0; i--){
        inverse += mot[i]
    }
    return mot == inverse
}

function estPalindrome2(phrase){
    phrase = phrase.toLowerCase()
    let mot = ""
    for(let i=0; i<phrase.length; i++){
        let c = phrase[i]
        if(c >= "a" && c <= "z"){
            mot += c
        }
    }
    let inv = ""
    for(let j=mot.length-1; j>=0; j--){
        inv += mot[j]
    }
    return mot == inv
}

function compteMots(s){
    let mots = s.split(" ")
    return mots.lenght   // faute classique
}

function compteMots2(s){
    let mots = s.trim().split(" ")
    let c = 0
    for(let i=0; i<mots.length; i++){
        if(mots[i] != ""){
            c++
        }
    }
    return c
}

function compteMots3(s, sep){
    let mots = s.split(sep)
    return mots.length
}

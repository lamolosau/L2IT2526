function estPalindrome(mot) {
      if (mot.length === 0) {
        return true;
      }
      if (mot.length === 1) {
        return true;
      }
      for (var i = 0; i < mot.length; i++) {
            if (mot[i] !== mot[mot.length - i]) {
                  return false
            } else {
                  return true
            }
      }
}

function estPalindrome2(phrase) {
      var phrasese = phrase.replace(/\s+/g, '').toLowerCase();
      var debut = 0;
      var fin = phrasese.length - 1;
      while (debut < fin) {
            if (phrasese[debut] !== phrasese[fin]) {
                  return false;
            }
            debut++;
            fin--;
      }
      return true;
}

function compteMots(s) {
      var compteur = 0;
      for (var i = 0; i < s.length; i++) {
            if (s[i] == ' ') {
                  compteur++;
            }
      return compteur
      }
}

function compteMots2(s) {
      var compteur = 0;
      for (var i = 0; i < s.length; i++) {
            if (s[i] == ' ') {
                  compteur++;
            }
      return compteur
      }
}

function compteMots3(s, sep) {
      var compteur = 0;
      for (var i = 0; i < s.length; i++) {
            if (s[i] == sep) {
                  compteur++;
            }
      return compteur
      }
}
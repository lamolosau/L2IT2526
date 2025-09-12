function maxi(n1, n2) {

    if (n1 >= n2) {
        return n1;
    } else {
        return n2;
    }

}

function abs(n) {

    if (n < 0) {
        return -n;
    } else {
        return n;
    }

}

function harm(n) {

  let somme = 0;
  let i;
  for (i = 1; i <= n; i++) {
    somme+=1/i;
  }
  return somme;

}

function harmAlt(n) {

  let somme = 0;
  let i;
  for (i = 1; i <= n; i++) {
    if (i % 2 === 1) {
      somme-= 1/ i;
    } else {
      somme+= 1/i;
    }
  }
  return somme;

}

function nbIterHarmAlt(epsilon) {

  if (epsilon <= 0) return 0;
  let valeurCible = -Math.log(2);
  let somme = 0;
  let i= 0;
  while (true) {
    i =i+1;
    if (i%2 === 1) {
      somme-= 1/i;
    } else {
      somme+= 1/i;
    }
    if (abs(somme - valeurCible) <= epsilon) {
      return i;
    }
  }

}

function celsiusToFahrenheit(n, pas) {

  if (pas <= 0) {
    console.log("Le pas doit etre positif");
    return;
  }
  let c;
  for (c = 0; c <= n; c = c + pas) {
    let f = (9 * c) / 5 + 32;
    console.log(c + " °C -> " + f + " °F");
  }

}

function bin(quantity, unit) {
  switch (unit) {
    case "K":
      return quantity*1024;
      break;
    case "M":
      return quantity*1024**2;
      break;
    case "G":
      return quantity*1024**3;
      break;
    case "T":
      return quantity*1024**4;
      break;
    default:
      return quantity;
  }
}

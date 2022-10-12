let amount = document.getElementById("amount");
let people = document.getElementById("people");
let day = document.getElementById("day");
let button = document.getElementById("button");
let getAmount;
// setTimeout(() => {
//   document.getElementById("header").style.backgroundColor = "blue";
//   document.getElementById(
//     "header"
//   ).innerHTML = `<div id="header">Tip Calculator</div>`;
// }, 500);
// setTimeout(() => {
//   document.getElementById("header").innerHTML = "";
//   document.getElementById("header").style.backgroundColor = "";
// }, 2000);

const doCal = () => {
  let totalTip = (Number(day.value) / 100) * Number(amount.value);
  getAmount = totalTip / Number(people.value);

  if (amount.value === "" || people.value === "") {
    alert("You need to fill every place");
  } else {
    setTimeout(() => {
      document.getElementById("final").style.backgroundColor = "lightBlue";
      document.getElementById(
        "final"
      ).innerHTML = `<div id="final">Tip per person is : ${getAmount}</div>`;
    }, 500);
  }

  amount.value = "";
  people.value = "";
  day.value = "20";
  setTimeout(() => {
    document.getElementById("final").innerHTML = "";
    document.getElementById("final").style.backgroundColor = "";
  }, 6000);
};

button.addEventListener("click", doCal);

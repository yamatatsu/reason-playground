module School = {
  type profession =
    | Teacher
    | Director;

  let person1 = Teacher;
  let getProfession = person =>
    switch (person) {
    | Teacher => "A teacher"
    | Director => "A director"
    };
};

Js.log(School.getProfession(School.Director));
Js.log(School.(getProfession(Teacher)));

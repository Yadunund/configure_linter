// Original code is in correct Format

Foo::Foo(
  A a,
  B b)
: _bar(std::make_shared<Bar>(
    Bar{
      a,
      b,
    }))
{

}

// single (
foo.emplace_back(
  bar,
  bar);

// Single {
foo = std::unordered_set<std::string>{
  bar,
  bar};

// ( followed by {
foo.emplace_back(
  FOO{
    bar,
    bar});


// ( followed by (
foo.emplace_back(
  Foo::make_foo(
    bar,
    bar));


result = std::make_shared<Foo>(
  FinalShape::Implementation{std::move(shape),
    bar,
    bar});

// ( followed by { followed by (
foo.emplace_back(
  Foo{
    bar1, bar2,
    func(
      bar1,
      bar2)
  });

// ( followed by { followed by {
foo.emplace_back(
  Foo{
    bar1, bar2,
    Bar{
      bar3,
      bar4}
    });

// throw
if (foo < bar)
{
  throw std::invalid_argument(
    "Error line1"
    + "Error lin2");
}


// Original code is in incorrect format (Indent needs to be shifted in)

Foo::Foo(
    A a,
    B b)
: _bar(std::make_shared<Bar>(
      Bar{
          a,
          b,
      }))
{

}
// single (
foo.emplace_back(
    bar,
    bar);

// Single {
foo = std::unordered_set<std::string>{
    bar,
    bar};

// ( followed by {
foo.emplace_back(
    FOO{
        bar,
        bar});


// ( followed by (
foo.emplace_back(
    Foo::make_foo(
        bar,
        bar));

// ( followed by { followed by (
foo.emplace_back(
    Foo{
        bar1, bar2,
        func(
            bar1,
            bar2)
     });

// ( followed by { followed by {
foo.emplace_back(
    Foo{
        bar1, bar2,
        Bar{
            bar3,
            bar4}
     });

// throw
if (foo < bar)
{
  throw std::invalid_argument(
      "Error line1"
      + "Error lin2");
}


float b[1];

void main()
{
    --b[0];

    assert(b[0] == -1.000000, "b[0] must be -1.000000");
}

class comparator_class {
public:
    // Comparator function
    bool operator()(object o1, object o2)
    {
 
        // There can be any condition
        // implemented as per the need
        // of the problem statement
        return (o1.data_member
                == o2.data_member);
    }
}

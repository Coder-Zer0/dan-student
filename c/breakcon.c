main() {
    int xx;
        for (int xx = 5; xx < 15; xx += 1) {
            if (xx == 8)
                break;
            printf("in the break loop, xx is now %d\n", xx);
        }
        for (xx = 5; xx < 15; xx += 1) {
            if (xx == 8)
                continue;
            printf("In the continue loop, xx is now %d\n", xx);
        }
}
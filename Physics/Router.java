import java.util.HashMap;
import java.util.Map;
import spark.template.freemarker.FreeMarkerEngine;

import spark.ModelAndView;
import spark.Request;
import static spark.Spark.*;

public class Router {
    public static void setRoutes() {

        /*============================================================
        =========================   GENERAL   ========================
        ============================================================*/

        get("/", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            // The template.ftl file is located in directory:
            // src/test/resources/spark/template/freemarker
            return new ModelAndView(attributes, "home.ftl");
        }, new FreeMarkerEngine());

        /*============================================================
        =========================   LESSONS   ========================
        ============================================================*/

        get("/lesson/intro", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "lessons/intro.ftl");
        }, new FreeMarkerEngine());

        get("/lesson/motion/oned", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "lessons/motion/oned.ftl");
        }, new FreeMarkerEngine());

        get("/lesson/motion/twod", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "lessons/motion/twod.ftl");
        }, new FreeMarkerEngine());

        get("/lesson/motion/ucm", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "lessons/motion/ucm.ftl");
        }, new FreeMarkerEngine());

        get("lesson/force/intro", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "lessons/force/force.ftl");
        }, new FreeMarkerEngine());

        get("lesson/momentum/intro", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "lessons/momentum/intro.ftl");
        }, new FreeMarkerEngine());

        get("lesson/momentum/problems", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "lessons/momentum/problemsolving.ftl");
        }, new FreeMarkerEngine());

        /*============================================================
        =========================   MOTION   =========================
        ============================================================*/

        get("/calc/1dmotion", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "calculators/oned.ftl");
        }, new FreeMarkerEngine());

        get("/calc/2dmotion", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "calculators/twod.ftl");
        }, new FreeMarkerEngine());

        get("/calc/ucmmotion", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "calculators/ucm.ftl");
        }, new FreeMarkerEngine());


        get("/calc/motion", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "calculators/motion.ftl");
        }, new FreeMarkerEngine());


        post("/motion/onedimension", (req, res) -> Motion.postSolveOneDMotion(req, res));

        post("/motion/twodimensions", (req, res) -> Motion.postSolveTwoDMotion(req, res));

        post("/motion/ucm", (req, res) -> Motion.postSolveUCM(req, res));

        /*============================================================
        =========================   FORCE   ==========================
        ============================================================*/

        get("/calc/force", (req, res) -> {
            Map<String, Object> attributes = new HashMap<>();

            return new ModelAndView(attributes, "calculators/force.ftl");
        }, new FreeMarkerEngine());

        post("/force/solve", (req, res) -> Force.solveForce(req, res));

        /*============================================================
        =========================   MOMENTUM   =======================
        ============================================================*/

        post("/momentum/solve", (req, res) -> Momentum.postSolveMomentum(req, res));
    }
}
